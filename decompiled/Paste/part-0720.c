/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007e0f9c | FUN_1007e0f9c */

void FUN_1007e0f9c(void)

{
  FUN_1007e0fec();
  return;
}



/* Address: 0x1007e0fc4 | FUN_1007e0fc4 */

void FUN_1007e0fc4(void)

{
  FUN_1007e0fec();
  return;
}



/* Address: 0x1007e0fec | FUN_1007e0fec */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e1058 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007e0fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  code *param_9)

{
  undefined8 uVar1;
  ContiguousArray<undefined> CVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x21;
  
  uVar1 = param_4;
  uVar4 = param_7;
  FUN_1007f61ec();
  Swift::Array<undefined>::_allocateUninitialized(0,param_5);
  CVar2 = Swift::ContiguousArray::_init(uVar1,param_5);
  uVar3 = 0;
  FUN_1007e85b0(0,param_4,param_5,param_7);
  (*param_9)(param_1,param_2,param_3,uVar3,param_6,param_8);
  (**(code **)(*(long *)(param_6 + -8) + 8))(param_1,param_6);
  if (unaff_x21 != 0) {
    _swift_release(uVar1);
    _swift_release(uVar4);
    _swift_release(CVar2.unknown);
  }
  return;
}



/* Address: 0x1007e10fc | FUN_1007e10fc */

void FUN_1007e10fc(undefined8 param_1)

{
  long in_x5;
  long unaff_x21;
  
  FUN_1007e1f1c();
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(in_x5 + -8) + 8))(param_1,in_x5);
  }
  else {
    (**(code **)(*(long *)(in_x5 + -8) + 8))(param_1,in_x5);
  }
  return;
}



/* Address: 0x1007e1188 | FUN_1007e1188 */

void FUN_1007e1188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x21;
  
  _swift_getAssociatedTypeWitness
            (0xff,param_7,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  uVar1 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550,uVar1);
  FUN_1007e1f1c(param_1,param_2,param_3,param_4,uVar1,param_5,param_6,puVar2,param_7);
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_5 + -8) + 8))(param_1,param_5);
  }
  else {
    (**(code **)(*(long *)(param_5 + -8) + 8))(param_1,param_5);
  }
  return;
}



/* Address: 0x1007e12a4 | FUN_1007e12a4 */

void FUN_1007e12a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(*(long *)(param_7 + 8) + 8),param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))
            (&stack0xffffffffffffffc0 +
             -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0),param_2,lVar1);
  Swift::RangeReplaceableCollection::_append();
  return;
}



/* Address: 0x1007e1350 | FUN_1007e1350 */

void FUN_1007e1350(void)

{
  FUN_1007e135c();
  return;
}



/* Address: 0x1007e135c | FUN_1007e135c */

undefined8
FUN_1007e135c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,code *param_7)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  (*param_7)();
  (**(code **)(*(long *)(param_4 + -8) + 8))(param_1,param_4);
  return uVar1;
}



/* Address: 0x1007e13bc | FUN_1007e13bc */

long FUN_1007e13bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  LazySequence LVar2;
  undefined8 uVar3;
  LazyMapSequence LVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  
  local_90 = param_2;
  local_80 = param_1;
  local_78 = param_5;
  LVar2 = Swift::LazySequence::typeMetadataAccessor();
  local_70 = *(long *)(LVar2.unknown + -8);
  lVar6 = *(long *)(local_70 + 0x40);
  uVar3 = 0xff;
  local_98 = param_3;
  _swift_getTupleTypeMetadata2(0xff,param_2,param_3,"key value ",0);
  local_88 = uVar3;
  LVar4 = Swift::LazyMapSequence::typeMetadataAccessor();
  local_68 = *(long *)(LVar4.unknown + -8);
  lVar7 = (long)(auStack_a0 + -(lVar6 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(local_68 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (extension_Swift)::Swift::Sequence::get_lazy();
  puVar5 = &DAT_100f03388;
  _swift_allocObject(&DAT_100f03388,0x38,7);
  uVar1 = local_78;
  uVar3 = local_90;
  *(undefined8 *)(puVar5 + 0x10) = local_90;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(long *)(puVar5 + 0x20) = param_4;
  *(undefined8 *)(puVar5 + 0x28) = local_78;
  *(undefined8 *)(puVar5 + 0x30) = param_6;
  _swift_getWitnessTable
            (PTR_Swift__Swift__LazySequence<undefined>_>Swift__LazySequenceProtocol_100eace88,
             LVar2.unknown);
  (extension_Swift)::Swift::LazySequenceProtocol::_map();
  _swift_release(puVar5);
  (**(code **)(local_70 + 8))(auStack_a0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),LVar2.unknown);
  puVar5 = PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0;
  _swift_getWitnessTable
            (PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0,
             LVar4.unknown);
  lVar6 = lVar7;
  FUN_1007e1bf8(lVar7,uVar3,local_98,LVar4.unknown,uVar1,puVar5);
  (**(code **)(*(long *)(param_4 + -8) + 8))(local_80,param_4);
  (**(code **)(local_68 + 8))(lVar7,LVar4.unknown);
  return lVar6;
}



/* Address: 0x1007e15a4 | FUN_1007e15a4 */

void FUN_1007e15a4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar2 = 0;
  _swift_getTupleTypeMetadata2();
  lVar7 = *(long *)(lVar2 + -8);
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar5 = auStack_70 + -uVar4;
  lVar6 = (long)puVar5 - uVar4;
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,param_3,param_4,"key value ",0);
  iVar1 = *(int *)(lVar3 + 0x30);
  pcVar8 = *(code **)(lVar7 + 0x10);
  (*pcVar8)(lVar6,param_2,lVar2);
  local_68 = (long)*(int *)(lVar2 + 0x30);
  lVar3 = *(long *)(param_3 + -8);
  (**(code **)(lVar3 + 0x20))(param_1,lVar6,param_3);
  (*pcVar8)(puVar5,param_2,lVar2);
  lVar7 = *(long *)(param_4 + -8);
  (**(code **)(lVar7 + 0x20))(param_1 + iVar1,puVar5 + *(int *)(lVar2 + 0x30),param_4);
  (**(code **)(lVar3 + 8))(puVar5,param_3);
  (**(code **)(lVar7 + 8))(lVar6 + local_68,param_4);
  return;
}



/* Address: 0x1007e16d4 | FUN_1007e16d4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e177c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined *
FUN_1007e16d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  ContiguousArray<undefined> CVar4;
  ContiguousArray CVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  __int64 _Var8;
  ContiguousArray<undefined> CVar9;
  __int64 _Var10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  
  local_80 = *(long *)(param_6 + -8);
  lVar11 = *(long *)(local_80 + 0x40);
  local_88 = *(long *)(param_5 + -8);
  local_90 = param_9;
  local_78 = param_2;
  local_70 = param_1;
  (**(code **)(local_88 + 0x10))
            ((long)(auStack_a0 + -(lVar11 + 0xfU & 0xfffffffffffffff0)) -
             (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0),param_1,param_5);
  CVar4 = Swift::ContiguousArray::_init(param_1,param_3,param_5,param_8);
  CVar9 = CVar4;
  local_68 = CVar4.unknown;
  FUN_100002c1c();
  CVar5 = Swift::ContiguousArray::typeMetadataAccessor();
  puVar6 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140,
             CVar5.unknown);
  ppuVar7 = &local_68;
  FUN_1007dc87c(ppuVar7,0,1,CVar9.unknown,CVar5.unknown,puVar6,param_7);
  _Var8 = Swift::ContiguousArray::get_count((ContiguousArray)CVar4.unknown);
  CVar5.unknown = (undefined *)(undefined **)0x0;
  if (0xf < _Var8) {
    _swift_retain(ppuVar7);
    CVar5.unknown = (undefined *)ppuVar7;
  }
  FUN_10069d9ec(CVar4.unknown,CVar5.unknown,param_3,param_7);
  local_98 = CVar4.unknown;
  _swift_release(ppuVar7);
  uVar2 = local_78;
  lVar1 = local_80;
  (**(code **)(local_80 + 0x10))
            (auStack_a0 + -(lVar11 + 0xfU & 0xfffffffffffffff0),local_78,param_6);
  CVar9 = Swift::ContiguousArray::_init(CVar4.unknown,param_4,param_6,local_90);
  _Var8 = Swift::ContiguousArray::get_count(CVar5);
  _Var10 = Swift::ContiguousArray::get_count((ContiguousArray)CVar9.unknown);
  (**(code **)(lVar1 + 8))(uVar2,param_6);
  (**(code **)(local_88 + 8))(local_70,param_5);
  if (_Var8 == _Var10) {
    return local_98;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007e18c4);
  (*pcVar3)();
}



/* Address: 0x1007e18c4 | FUN_1007e18c4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e1a10 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_1007e18c4(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  Optional OVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ContiguousArray CVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long local_d0;
  __int64 local_c8;
  undefined8 local_c0;
  long local_b8;
  code *local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 uStack_70;
  undefined *local_68;
  
  lVar11 = *(long *)(param_3 + -8);
  uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a0 = (long)&local_d0 - uVar9;
  lVar12 = local_a0 - uVar9;
  local_98 = *(long *)(param_2 + -8);
  uVar9 = lVar12 - (*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0xff;
  local_c0 = param_6;
  local_a8 = param_1;
  local_90 = param_5;
  _swift_getTupleTypeMetadata2();
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar13 = uVar9 - (*(long *)(*(long *)(CONCAT71((int7)((ulong)lVar3 >> 8),OVar2.value) + -8) + 0x40
                             ) + 0xfU & 0xfffffffffffffff0);
  local_b0 = *(code **)(param_4 + -8);
  lVar10 = lVar13 - (*(long *)((long)local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_b8 = lVar10;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_d0 = *(long *)(lVar4 + -8);
  local_80 = lVar10 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = param_2;
  local_88 = lVar4;
  FUN_1007f61ec();
  Swift::Array<undefined>::_allocateUninitialized(0,param_3);
  local_68 = (undefined *)Swift::ContiguousArray::_init(lVar10,param_3);
  uVar6 = local_c0;
  local_78 = lVar10;
  uStack_70 = param_5;
  local_c8 = Swift::Sequence::get_underestimatedCount();
  uVar5 = 0;
  FUN_1007e85b0(0,param_2,param_3,local_90);
  FUN_1007e3fa0(local_c8,uVar5);
  (**(code **)((long)local_b0 + 0x10))(local_b8,local_a8,param_4);
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (uVar6,param_4,local_88,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  local_a8 = uVar6;
  Swift::IteratorProtocol::_next();
  local_b0 = *(code **)(*(long *)(lVar3 + -8) + 0x30);
  lVar10 = lVar13;
  (*local_b0)(lVar13,1,lVar3);
  if ((int)lVar10 != 1) {
    pcVar14 = *(code **)(local_98 + 0x20);
    do {
      iVar1 = *(int *)(lVar3 + 0x30);
      (*pcVar14)(uVar9,lVar13,param_2);
      (**(code **)(lVar11 + 0x20))(lVar12,lVar13 + iVar1,param_3);
      uVar6 = 0;
      FUN_1007fa688(0,param_2,local_90);
      uVar7 = uVar9;
      FUN_1007ea300(uVar9,uVar6);
      lVar10 = local_a0;
      if ((uVar7 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1007e1bf8);
        (*pcVar14)();
      }
      (**(code **)(lVar11 + 0x10))(local_a0,lVar12,param_3);
      CVar8 = Swift::ContiguousArray::typeMetadataAccessor();
      Swift::ContiguousArray::append(&local_78,lVar10,CVar8.unknown);
      (**(code **)(lVar11 + 8))(lVar12,param_3);
      (**(code **)(local_98 + 8))(uVar9,param_2);
      Swift::IteratorProtocol::_next();
      lVar10 = lVar13;
      (*local_b0)(lVar13,1,lVar3);
    } while ((int)lVar10 != 1);
  }
  (**(code **)(local_d0 + 8))(local_80,local_88);
  return local_78;
}



/* Address: 0x1007e1bf8 | FUN_1007e1bf8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e1d60 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_1007e1bf8(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  undefined1 *puVar2;
  Optional OVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ContiguousArray CVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_f0 [8];
  __int64 local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 uStack_70;
  undefined *local_68;
  
  lVar12 = *(long *)(param_3 + -8);
  uVar9 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_b8 = auStack_f0 + -uVar9;
  lVar13 = (long)local_b8 - uVar9;
  local_c0 = *(long *)(param_2 + -8);
  lVar14 = lVar13 - (*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0xff;
  local_e0 = param_6;
  local_b0 = param_1;
  local_90 = param_5;
  _swift_getTupleTypeMetadata2();
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_98 = CONCAT71((int7)((ulong)lVar4 >> 8),OVar3.value);
  local_a0 = *(long *)(lStack_98 + -8);
  uVar9 = *(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a8 = lVar14 - uVar9;
  lVar11 = local_a8 - uVar9;
  local_d0 = *(long *)(param_4 + -8);
  lVar10 = lVar11 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_d8 = lVar10;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_c8 = *(long *)(lVar5 + -8);
  local_88 = lVar10 - (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = param_2;
  local_80 = lVar5;
  FUN_1007f61ec();
  Swift::Array<undefined>::_allocateUninitialized(0,param_3);
  local_68 = (undefined *)Swift::ContiguousArray::_init(lVar10,param_3);
  uVar7 = local_e0;
  local_78 = lVar10;
  uStack_70 = param_5;
  local_e8 = Swift::Sequence::get_underestimatedCount();
  uVar6 = 0;
  FUN_1007e85b0(0,param_2,param_3,local_90);
  FUN_1007e3fa0(local_e8,uVar6);
  (**(code **)(local_d0 + 0x10))(local_d8,local_b0,param_4);
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (uVar7,param_4,local_80,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  lVar10 = local_c0;
  local_b0 = uVar7;
  while( true ) {
    lVar5 = local_a8;
    Swift::IteratorProtocol::_next();
    (**(code **)(local_a0 + 0x20))(lVar11,lVar5,lStack_98);
    lVar5 = lVar11;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar11,1,lVar4);
    if ((int)lVar5 == 1) break;
    iVar1 = *(int *)(lVar4 + 0x30);
    (**(code **)(lVar10 + 0x20))(lVar14,lVar11,param_2);
    (**(code **)(lVar12 + 0x20))(lVar13,lVar11 + iVar1,param_3);
    uVar7 = 0;
    FUN_1007fa688(0,param_2,local_90);
    FUN_1007ea370(lVar14,uVar7);
    puVar2 = local_b8;
    (**(code **)(lVar12 + 0x10))(local_b8,lVar13,param_3);
    CVar8 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::append(&local_78,puVar2,CVar8.unknown);
    (**(code **)(lVar12 + 8))(lVar13,param_3);
    (**(code **)(lVar10 + 8))(lVar14,param_2);
  }
  (**(code **)(local_c8 + 8))(local_88,local_80);
  return local_78;
}



/* Address: 0x1007e1f1c | FUN_1007e1f1c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e20c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_1007e1f1c(undefined8 param_1,code *param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  Optional OVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *local_190;
  undefined8 local_188;
  long local_180;
  long local_178;
  undefined8 local_170;
  code *local_168;
  code *local_160;
  undefined8 local_158;
  long local_150;
  long local_148;
  code *local_140;
  long local_138;
  undefined8 local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined1 auStack_110 [16];
  long local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined1 auStack_c0 [16];
  long local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 local_78;
  undefined *local_70;
  
  local_130 = param_9;
  local_150 = *(long *)(param_4 + -8);
  lVar12 = (long)&local_190 - (*(long *)(local_150 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_170 = param_7;
  local_158 = param_1;
  local_148 = param_8;
  local_140 = param_2;
  local_138 = param_3;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(*(long *)(param_8 + 8) + 8),param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  local_128 = *(long *)(lVar2 + -8);
  lVar10 = lVar12 - (*(long *)(local_128 + 0x40) + 0xfU & 0xfffffffffffffff0);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar11 = lVar10 - (*(long *)(*(long *)(CONCAT71((int7)((ulong)lVar2 >> 8),OVar1.value) + -8) +
                              0x40) + 0xfU & 0xfffffffffffffff0);
  local_160 = *(code **)(param_6 + -8);
  pcVar7 = (code *)(lVar11 - (*(long *)((long)local_160 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  local_168 = pcVar7;
  local_118 = param_6;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_178 = *(long *)(lVar3 + -8);
  lVar8 = (long)pcVar7 - (*(long *)(local_178 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = param_4;
  uVar5 = local_170;
  local_120 = lVar3;
  FUN_1007f61ec();
  Swift::Array<undefined>::_allocateUninitialized(0,param_5);
  local_190 = (undefined *)Swift::ContiguousArray::_init(lVar4,param_5);
  local_188 = uVar5;
  local_180 = lVar4;
  local_80 = lVar4;
  local_78 = uVar5;
  local_70 = local_190;
  (**(code **)((long)local_160 + 0x10))(local_168,local_158,local_118);
  uVar5 = local_130;
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (uVar5,local_118,local_120,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  local_158 = uVar5;
  Swift::IteratorProtocol::_next();
  lVar4 = local_128;
  local_160 = *(code **)(local_128 + 0x30);
  lVar3 = lVar11;
  (*local_160)(lVar11,1,lVar2);
  uVar5 = local_170;
  lVar9 = local_180;
  if ((int)lVar3 != 1) {
    local_168 = *(code **)(lVar4 + 0x20);
    do {
      (*local_168)(lVar10,lVar11,lVar2);
      lVar4 = local_138;
      (*local_140)(lVar12,lVar10);
      if (unaff_x21 != 0) {
        (**(code **)(local_178 + 8))(lVar8,local_120);
        _swift_release(local_80);
        _swift_release(local_78);
        _swift_release(local_70);
        (**(code **)(local_128 + 8))(lVar10,lVar2);
        return lVar4;
      }
      local_a0 = local_118;
      uStack_98 = uVar5;
      local_90 = local_148;
      uStack_88 = local_130;
      local_f0 = local_118;
      uStack_e8 = uVar5;
      local_e0 = local_148;
      uStack_d8 = local_130;
      uVar6 = 0;
      local_100 = param_4;
      uStack_f8 = param_5;
      local_d0 = lVar10;
      local_b0 = param_4;
      uStack_a8 = param_5;
      FUN_1007e85b0(0,param_4,param_5,uVar5);
      FUN_1007e5a3c(lVar12,FUN_1007e23cc,auStack_c0,FUN_1007e23f4,auStack_110,uVar6,
                    PTR___type_metadata_for____100eae0c8 + 8);
      (**(code **)(local_150 + 8))(lVar12,param_4);
      (**(code **)(local_128 + 8))(lVar10,lVar2);
      Swift::IteratorProtocol::_next();
      lVar4 = lVar11;
      (*local_160)(lVar11,1,lVar2);
      lVar9 = local_80;
    } while ((int)lVar4 != 1);
  }
  (**(code **)(local_178 + 8))(lVar8,local_120);
  return lVar9;
}



/* Address: 0x1007e23a8 | thunk_FUN_1007e1bf8 */

void thunk_FUN_1007e1bf8(void)

{
  FUN_1007e1bf8();
  return;
}



/* Address: 0x1007e23ac | FUN_1007e23ac */

void FUN_1007e23ac(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1007e23bc | FUN_1007e23bc */

void FUN_1007e23bc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007e15a4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1007e23cc | FUN_1007e23cc */

void FUN_1007e23cc(void)

{
  Swift::RangeReplaceableCollection::init();
  return;
}



/* Address: 0x1007e23f4 | FUN_1007e23f4 */

void FUN_1007e23f4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007e12a4(param_1,*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x1007e2418 | FUN_1007e2418 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e24a4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007e2418(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  __int64 _Var5;
  long unaff_x20;
  ContiguousArray CVar6;
  long local_70;
  long lStack_68;
  
  CVar6.unknown = *(undefined **)(unaff_x20 + 0x10);
  uVar3 = 0;
  FUN_1007e0304(0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                *(undefined8 *)(param_3 + 0x20));
  pTVar4 = &TargetProtocolConformanceDescriptor_100c797a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c797a0,uVar3);
  Swift::RangeExpression::_relative(&local_70,pTVar4,uVar3,pTVar4,param_4,param_5);
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e251c);
    (*pcVar2)();
  }
  _Var5 = Swift::ContiguousArray::get_count(CVar6);
  if (_Var5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e2520);
    (*pcVar2)();
  }
  if (SBORROW8(lStack_68,local_70)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e2524);
    (*pcVar2)();
  }
  if (!SBORROW8(param_2,local_70)) {
    uVar1 = param_2 - local_70;
    if (lStack_68 - local_70 <= param_2 - local_70) {
      uVar1 = lStack_68 - local_70;
    }
    FUN_1007e2528(local_70,lStack_68,param_2 - (uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU))
                  ,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e2528);
  (*pcVar2)();
}



/* Address: 0x1007e2528 | FUN_1007e2528 */

void FUN_1007e2528(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ContiguousArray CVar4;
  __int64 start;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_60;
  undefined8 uStack_58;
  
  uVar3 = 0;
  FUN_1007fa688(0,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x20));
  FUN_1007ead98(param_1,param_2,param_3,uVar3);
  lVar1 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e264c);
    (*pcVar2)();
  }
  if ((0 < lVar1) && (param_1 != param_3)) {
    uVar6 = *(undefined8 *)(param_4 + 0x18);
    CVar4 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::_makeMutableAndUnique(CVar4);
    start = *(long *)(unaff_x20 + 0x10);
    uVar5 = *(undefined8 *)(start + 0x10);
    FUN_100636dd8(start,uVar6);
    uVar3 = uVar5;
    local_60 = (undefined *)Swift::UnsafeMutableBufferPointer::_init(start);
    uStack_58 = uVar3;
    if (SCARRY8(param_1,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e2650);
      (*pcVar2)();
    }
    if (param_1 + lVar1 < param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e2654);
      (*pcVar2)();
    }
    FUN_1007eaef8(param_1,param_1 + lVar1,param_3,local_60,uVar3,uVar6);
    FUN_1007e37e8(&local_60,start,uVar5,unaff_x20 + 0x10,uVar6,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  }
  return;
}



/* Address: 0x1007e2654 | FUN_1007e2654 */

void FUN_1007e2654(void)

{
  FUN_1007e267c();
  return;
}



/* Address: 0x1007e2668 | FUN_1007e2668 */

void FUN_1007e2668(void)

{
  FUN_1007e267c();
  return;
}



/* Address: 0x1007e267c | FUN_1007e267c */

void FUN_1007e267c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  ContiguousArray CVar1;
  __int64 start;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined **ppuStack_68;
  
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar1);
  start = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(start + 0x10);
  FUN_100636dd8(start,uVar4);
  uVar3 = uVar5;
  local_b0 = (undefined *)Swift::UnsafeMutableBufferPointer::_init(start);
  local_90 = *(undefined8 *)(param_3 + 0x10);
  uStack_78 = *(undefined8 *)(param_3 + 0x20);
  ppuStack_68 = &local_b0;
  uVar2 = 0;
  uStack_a8 = uVar3;
  uStack_88 = uVar4;
  local_80 = param_4;
  local_70 = param_5;
  FUN_1007fa688(0);
  (*param_7)(param_1,param_2,param_6,auStack_a0,uVar2,param_4,param_5);
  FUN_1007e37e8(&local_b0,start,uVar5,unaff_x20 + 0x10,uVar4,
                PTR___type_metadata_for____100eae0c8 + 8,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x1007e278c | FUN_1007e278c */

void FUN_1007e278c(void)

{
  FUN_1007eb018();
  return;
}



/* Address: 0x1007e27b8 | thunk_FUN_1007e278c */

void thunk_FUN_1007e278c(void)

{
  FUN_1007e278c();
  return;
}



/* Address: 0x1007e27bc | FUN_1007e27bc */

void FUN_1007e27bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ContiguousArray CVar2;
  
  uVar1 = 0;
  FUN_1007fa688(0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20));
  FUN_1007ef080(param_1,param_2,uVar1);
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
             CVar2.unknown);
  (extension_Swift)::Swift::MutableCollection::_swapAt();
  return;
}



/* Address: 0x1007e284c | FUN_1007e284c */

void FUN_1007e284c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,long param_6)

{
  code *pcVar1;
  __int64 _Var2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  ContiguousArray CVar8;
  long lVar9;
  undefined8 uVar10;
  ContiguousArray CVar11;
  long lVar12;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  ulong local_68;
  
  lVar9 = *(long *)(param_6 + 0x18);
  lVar6 = *(long *)(lVar9 + -8);
  lVar12 = (long)&local_90 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e2adc);
    (*pcVar1)();
  }
  CVar11.unknown = (undefined *)unaff_x20[2];
  local_80 = param_1;
  local_78 = param_5;
  _Var2 = Swift::ContiguousArray::get_count(CVar11);
  if (_Var2 <= (long)param_3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e2ae0);
    (*pcVar1)();
  }
  uVar4 = *unaff_x20;
  uVar5 = unaff_x20[1];
  uVar10 = *(undefined8 *)(param_6 + 0x10);
  uVar7 = *(undefined8 *)(param_6 + 0x20);
  uVar3 = param_4;
  local_90 = param_2;
  local_88 = unaff_x20 + 2;
  FUN_1007f9250(param_4,uVar4,uVar5,uVar10,uVar7);
  if (((uint)uVar4 & 0xff) == 1) {
    uVar4 = 0;
    FUN_1007fa688(0,uVar10,uVar7);
    FUN_1007ea1d8(param_4,uVar5,uVar4);
    (**(code **)(lVar6 + 0x10))(lVar12,local_78,lVar9);
    CVar11 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::append(lVar12,CVar11.unknown);
    CVar8.unknown = (undefined *)unaff_x20[2];
    _Var2 = Swift::ContiguousArray::get_count(CVar8);
    if (SBORROW8(_Var2,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e2ae4);
      (*pcVar1)();
    }
    FUN_1007ef080(param_3,_Var2 + -1,uVar4);
    local_68 = param_3;
    _Var2 = Swift::ContiguousArray::get_count(CVar8);
    local_70 = _Var2 + -1;
    if (!SBORROW8(_Var2,1)) {
      _swift_getWitnessTable
                (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
                 CVar11.unknown);
      (extension_Swift)::Swift::MutableCollection::_swapAt();
      FUN_1007f0edc(local_80,uVar4);
      _swift_getWitnessTable
                (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__BidirectionalCollection_100ead120
                 ,CVar11.unknown);
      _swift_getWitnessTable
                (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RangeReplaceableCollection_100ead150
                 ,CVar11.unknown);
      (extension_Swift)::Swift::RangeReplaceableCollection::_removeLast();
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e2aec);
    (*pcVar1)();
  }
  if (uVar3 != param_3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e2ae8);
    (*pcVar1)();
  }
  uVar4 = 0;
  FUN_1007fa688(0,uVar10,uVar7);
  FUN_1007ea498(local_80,param_4,param_3,uVar4);
  Swift::ContiguousArray::get_subscript(param_3,CVar11);
  CVar11 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar11);
  if (param_3 < *(ulong *)(unaff_x20[2] + 0x10)) {
                    /* WARNING: Could not recover jumptable at 0x0001007e2ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 0x18))
              (unaff_x20[2] +
               ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff)) +
               *(long *)(lVar6 + 0x48) * param_3,local_78,lVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e2af0);
  (*pcVar1)();
}



/* Address: 0x1007e2af0 | FUN_1007e2af0 */

void FUN_1007e2af0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *start;
  code *pcVar1;
  ContiguousArray CVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined *local_68;
  long local_60;
  undefined1 local_58 [8];
  
  lVar5 = *(long *)(param_3 + 0x18);
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar2);
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  start = (undefined *)(*(long *)(unaff_x20 + 0x10) + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)))
  ;
  lVar5 = lVar4;
  local_68 = (undefined *)Swift::UnsafeMutableBufferPointer::_init((__int64)start);
  local_60 = lVar5;
  FUN_1007e31c0(local_58,&local_68);
  if (unaff_x21 == 0) {
    if (local_68 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e2c10);
      (*pcVar1)();
    }
    if (start != local_68) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e2c04);
      (*pcVar1)();
    }
    if (local_60 != lVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e2c08);
      (*pcVar1)();
    }
  }
  else {
    if (local_68 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e2c0c);
      (*pcVar1)();
    }
    if (start != local_68) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e2bfc);
      (*pcVar1)();
    }
    if (local_60 != lVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e2c00);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x1007e2c10 | FUN_1007e2c10 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e2cc0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007e2c10(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  __int64 _Var3;
  __int64 _Var4;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar8 = *(undefined8 *)(param_3 + 0x18);
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  uStack_70 = *(undefined8 *)(param_3 + 0x20);
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  local_80 = uVar6;
  uStack_78 = uVar7;
  _swift_getWitnessTable(0x100c79ab0,param_3);
  pcVar1 = FUN_1007e3840;
  (extension_Swift)::Swift::Sequence::_sorted();
  if (unaff_x21 == 0) {
    uVar2 = 0;
    _swift_getTupleTypeMetadata2(0,uVar6,uVar7,"key value ",0);
    _Var3 = Swift::Array<undefined>::get_count(uVar2,uVar2);
    _Var4 = Swift::ContiguousArray::get_count((ContiguousArray)*(undefined **)(unaff_x20 + 0x10));
    if (_Var3 != _Var4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e2d50);
      (*pcVar1)();
    }
    local_80 = uVar6;
    uStack_78 = uVar8;
    uStack_70 = uVar5;
    FUN_1005b9a7c(FUN_1007e38b0,auStack_90,pcVar1,uVar2,PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    _swift_bridgeObjectRelease(pcVar1);
  }
  return;
}



/* Address: 0x1007e2d50 | FUN_1007e2d50 */

void FUN_1007e2d50(long param_1,undefined8 param_2)

{
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  local_40 = *(undefined8 *)(param_1 + 0x10);
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  local_30 = param_2;
  FUN_1007e2c10(FUN_1007e38d0,auStack_50,param_1);
  return;
}



/* Address: 0x1007e2d98 | FUN_1007e2d98 */

void FUN_1007e2d98(undefined8 param_1)

{
  FUN_1007e2db0(param_1,param_1,PTR___type_metadata_for_Swift_SystemRandomNumberGenerator_100ead8a0,
                PTR___protocol_witness_table_for_Swift_SystemRandomNumberGenerator___Swift_RandomNumberGenerator_in_Swift_100ead8a8
               );
  return;
}



/* Address: 0x1007e2db0 | FUN_1007e2db0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e2e88 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007e2db0(undefined *param_1,long param_2)

{
  bool bVar1;
  code *pcVar2;
  __int64 _Var3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ContiguousArray<undefined> CVar9;
  ContiguousArray CVar10;
  undefined **ppuVar11;
  ContiguousArray CVar12;
  ContiguousArray<undefined> CVar13;
  __int64 _Var14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 *unaff_x20;
  undefined8 uVar17;
  undefined8 uVar18;
  ContiguousArray CVar19;
  undefined8 uVar20;
  tuple2_conflict3 tVar21;
  undefined *local_88;
  ulong uStack_80;
  undefined *local_78;
  undefined *local_70;
  undefined *puStack_68;
  
  CVar19.unknown = (undefined *)unaff_x20[2];
  uVar17 = *(undefined8 *)(param_2 + 0x18);
  _Var3 = Swift::ContiguousArray::get_count(CVar19);
  if (1 < _Var3) {
    puVar16 = (undefined *)*unaff_x20;
    uVar8 = unaff_x20[1];
    uVar20 = *(undefined8 *)(param_2 + 0x10);
    uVar18 = *(undefined8 *)(param_2 + 0x20);
    puVar4 = puVar16;
    FUN_1007f925c(puVar16,uVar8,uVar20,uVar18);
    local_70 = CVar19.unknown;
    puStack_68 = puVar4;
    _swift_bridgeObjectRetain();
    _swift_retain(CVar19.unknown);
    uVar5 = 0;
    _swift_getTupleTypeMetadata2(0,uVar20,uVar17,0,0);
    tVar21 = Swift::Array<undefined>::_allocateUninitialized(0,uVar5);
    uVar6 = tVar21._0_8_;
    uVar5 = uVar20;
    uVar15 = uVar17;
    FUN_1007e050c();
    _swift_release(CVar19.unknown);
    _swift_release(uVar8);
    _swift_release(puVar16);
    uVar7 = Swift::Array<undefined>::get_count(uVar6,uVar20);
    _swift_bridgeObjectRelease(puVar4);
    if (1 < (long)uVar7) {
      FUN_1007e38f0();
      puVar16 = (undefined *)0x0;
      do {
        local_88 = (undefined *)0x0;
        uStack_80 = uVar7;
        (extension_Swift)::Swift::FixedWidthInteger::_random((Range<undefined>)&local_88,param_1);
        puVar4 = puVar16 + (long)local_78;
        local_88 = puVar16;
        if (SCARRY8((long)puVar16,(long)local_78)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e3138);
          (*pcVar2)();
        }
        uVar8 = 0;
        local_78 = puVar4;
        Swift::Array<undefined>::typeMetadataAccessor();
        _swift_getWitnessTable
                  (PTR_Swift__Swift__Array<undefined>_>Swift__MutableCollection_100eac520,uVar8);
        (extension_Swift)::Swift::MutableCollection::_swapAt();
        local_88 = puVar16;
        local_78 = puVar4;
        CVar19 = Swift::ContiguousArray::typeMetadataAccessor();
        _swift_getWitnessTable
                  (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
                   CVar19.unknown);
        (extension_Swift)::Swift::MutableCollection::_swapAt();
        if (SCARRY8((long)puVar16,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e313c);
          (*pcVar2)();
        }
        puVar16 = puVar16 + 1;
        bVar1 = 2 < uVar7;
        uVar7 = uVar7 - 1;
        CVar19.unknown = local_70;
        puVar4 = puStack_68;
      } while (bVar1);
    }
    uVar8 = 0;
    local_88 = puVar4;
    Swift::Array<undefined>::typeMetadataAccessor();
    _swift_bridgeObjectRetain(puVar4);
    puVar16 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar8);
    CVar9 = Swift::ContiguousArray::_init(puVar16,uVar20,uVar8,puVar16);
    CVar13 = CVar9;
    local_88 = CVar9.unknown;
    FUN_100002c1c();
    CVar10 = Swift::ContiguousArray::typeMetadataAccessor();
    puVar16 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140;
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140
               ,CVar10.unknown);
    ppuVar11 = &local_88;
    FUN_1007dc87c(ppuVar11,0,1,CVar13.unknown,CVar10.unknown,puVar16,uVar18);
    _Var3 = Swift::ContiguousArray::get_count((ContiguousArray)CVar9.unknown);
    CVar10.unknown = (undefined *)(undefined **)0x0;
    if (0xf < _Var3) {
      _swift_retain(ppuVar11);
      CVar10.unknown = (undefined *)ppuVar11;
    }
    FUN_10069d9ec(CVar9.unknown,CVar10.unknown,uVar20,uVar18);
    _swift_release(ppuVar11);
    local_88 = CVar19.unknown;
    CVar12 = Swift::ContiguousArray::typeMetadataAccessor();
    _swift_retain(CVar19.unknown);
    puVar16 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130;
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130,
               CVar12.unknown);
    CVar13 = Swift::ContiguousArray::_init(puVar16,uVar17,CVar12.unknown,puVar16);
    _Var3 = Swift::ContiguousArray::get_count(CVar10);
    _Var14 = Swift::ContiguousArray::get_count((ContiguousArray)CVar13.unknown);
    _swift_release(uVar15);
    _swift_release(uVar5);
    _swift_bridgeObjectRelease(puVar4);
    _swift_release(CVar19.unknown);
    _swift_release(uVar6);
    if (_Var3 != _Var14) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e3140);
      (*pcVar2)();
    }
    *unaff_x20 = CVar9.unknown;
    unaff_x20[1] = CVar10.unknown;
    unaff_x20[2] = CVar13.unknown;
  }
  return;
}



/* Address: 0x1007e3140 | FUN_1007e3140 */

void FUN_1007e3140(long param_1)

{
  ContiguousArray CVar1;
  
  FUN_1007fa688(0,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20));
  FUN_1007ef2f4();
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__BidirectionalCollection_100ead120,
             CVar1.unknown);
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
             CVar1.unknown);
  (extension_Swift)::Swift::MutableCollection::_reverse();
  return;
}



/* Address: 0x1007e31c0 | FUN_1007e31c0 */

void FUN_1007e31c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x21;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  uVar2 = 0;
  FUN_1007fa688(0,param_6,param_8);
  FUN_1007ef168(uVar3,uVar1,param_4,param_5,uVar2,param_7);
  if (unaff_x21 == 0) {
    *param_1 = uVar3;
  }
  else {
    *param_9 = unaff_x21;
  }
  return;
}



/* Address: 0x1007e3260 | FUN_1007e3260 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e33b4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007e3260(undefined *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  UnsafeBufferPointer UVar2;
  undefined *puVar3;
  LazySequence LVar4;
  LazyMapSequence LVar5;
  ContiguousArray<undefined> CVar6;
  ContiguousArray CVar7;
  undefined **ppuVar8;
  __int64 _Var9;
  ContiguousArray<undefined> CVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_b0 = param_1;
  uStack_a8 = param_2;
  _swift_getTupleTypeMetadata2(0xff,param_4,param_5,"key value ",0);
  UVar2 = Swift::UnsafeBufferPointer::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Sequence_100eac040,
             UVar2.unknown);
  (extension_Swift)::Swift::Sequence::get_lazy();
  puVar3 = &DAT_100f033b0;
  _swift_allocObject(&DAT_100f033b0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  *(undefined8 *)(puVar3 + 0x20) = param_6;
  LVar4 = Swift::LazySequence::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__LazySequence<undefined>_>Swift__LazySequenceProtocol_100eace88,
             LVar4.unknown);
  (extension_Swift)::Swift::LazySequenceProtocol::_map();
  _swift_release(puVar3);
  uStack_a8 = uStack_78;
  local_b0 = local_80;
  uStack_98 = local_68;
  uStack_a0 = uStack_70;
  LVar5 = Swift::LazyMapSequence::typeMetadataAccessor();
  _swift_retain(local_68);
  puVar3 = PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0;
  _swift_getWitnessTable
            (PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0,
             LVar5.unknown);
  CVar6 = Swift::ContiguousArray::_init(puVar3,param_4,LVar5.unknown,puVar3);
  CVar10 = CVar6;
  local_b0 = CVar6.unknown;
  FUN_100002c1c();
  CVar7 = Swift::ContiguousArray::typeMetadataAccessor();
  puVar3 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140,
             CVar7.unknown);
  ppuVar8 = &local_b0;
  FUN_1007dc87c(ppuVar8,0,1,CVar10.unknown,CVar7.unknown,puVar3);
  _Var9 = Swift::ContiguousArray::get_count((ContiguousArray)CVar6.unknown);
  ppuVar11 = (undefined **)0x0;
  if (0xf < _Var9) {
    _swift_retain(ppuVar8);
    ppuVar11 = ppuVar8;
  }
  FUN_10069d9ec(CVar6.unknown,ppuVar11,param_4,param_6);
  _swift_release(local_68);
  _swift_release(ppuVar8);
  uVar12 = *param_3;
  uVar1 = param_3[1];
  *param_3 = CVar6.unknown;
  param_3[1] = ppuVar11;
  _swift_release(uVar1);
  _swift_release(uVar12);
  local_b0 = param_1;
  uStack_a8 = param_2;
  (extension_Swift)::Swift::Sequence::get_lazy();
  puVar3 = &DAT_100f033d8;
  _swift_allocObject(&DAT_100f033d8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  *(undefined8 *)(puVar3 + 0x20) = param_6;
  (extension_Swift)::Swift::LazySequenceProtocol::_map();
  _swift_release(puVar3);
  LVar5 = Swift::LazyMapSequence::typeMetadataAccessor();
  puVar3 = PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0;
  _swift_getWitnessTable
            (PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0,
             LVar5.unknown);
  CVar10 = Swift::ContiguousArray::_init(puVar3,param_5,LVar5.unknown,puVar3);
  uVar12 = param_3[2];
  param_3[2] = CVar10.unknown;
  _swift_release(uVar12);
  return;
}



/* Address: 0x1007e3548 | FUN_1007e3548 */

void FUN_1007e3548(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  
  lVar2 = 0;
  _swift_getTupleTypeMetadata2();
  puVar3 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar3,param_2,lVar2);
  iVar1 = *(int *)(lVar2 + 0x30);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_1,puVar3,param_3);
  (**(code **)(*(long *)(param_4 + -8) + 8))(puVar3 + iVar1,param_4);
  return;
}



/* Address: 0x1007e35fc | FUN_1007e35fc */

void FUN_1007e35fc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  
  lVar1 = 0;
  _swift_getTupleTypeMetadata2();
  puVar2 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(puVar2,param_2,lVar1);
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,puVar2 + *(int *)(lVar1 + 0x30),param_4);
  (**(code **)(*(long *)(param_3 + -8) + 8))(puVar2,param_3);
  return;
}



/* Address: 0x1007e36b0 | FUN_1007e36b0 */

bool FUN_1007e36b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  code *pcVar8;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar2 = 0;
  local_78 = param_3;
  local_70 = param_4;
  local_68 = param_7;
  _swift_getTupleTypeMetadata2(0,param_5,param_6,"key value ",0);
  lVar6 = *(long *)(lVar2 + -8);
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar4 = auStack_80 + -uVar3;
  lVar5 = (long)puVar4 - uVar3;
  pcVar7 = *(code **)(*(long *)(param_5 + -8) + 0x10);
  (*pcVar7)(lVar5,param_1,param_5);
  pcVar8 = *(code **)(*(long *)(param_6 + -8) + 0x10);
  (*pcVar8)(lVar5 + *(int *)(lVar2 + 0x30),param_2,param_6);
  (*pcVar7)(puVar4,local_78,param_5);
  (*pcVar8)(puVar4 + *(int *)(lVar2 + 0x30),local_70,param_6);
  bVar1 = Swift::Comparable::<_infix(lVar5,puVar4,param_5,local_68);
  pcVar7 = *(code **)(lVar6 + 8);
  (*pcVar7)(puVar4,lVar2);
  (*pcVar7)(lVar5,lVar2);
  return bVar1;
}



/* Address: 0x1007e37e8 | FUN_1007e37e8 */

void FUN_1007e37e8(long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  
  if (*param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e381c);
    (*pcVar1)();
  }
  if (param_2 == *param_1) {
    if (param_1[1] == param_3) {
      Swift::ContiguousArray::typeMetadataAccessor();
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e3818);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e3814);
  (*pcVar1)();
}



/* Address: 0x1007e381c | FUN_1007e381c */

void FUN_1007e381c(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e3834);
    (*pcVar1)();
  }
  if (param_1 < *(ulong *)(param_2 + 0x10)) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e3838);
  (*pcVar1)();
}



/* Address: 0x1007e3838 | FUN_1007e3838 */

void FUN_1007e3838(void)

{
  Swift::ContiguousArray::typeMetadataAccessor();
  return;
}



/* Address: 0x1007e3840 | FUN_1007e3840 */

uint FUN_1007e3840(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x28);
  lVar2 = 0;
  _swift_getTupleTypeMetadata2
            (0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),"key value ",0);
  (*pcVar1)(param_1,param_1 + *(int *)(lVar2 + 0x30),param_2,param_2 + *(int *)(lVar2 + 0x30));
  return (uint)param_1 & 1;
}



/* Address: 0x1007e38b0 | FUN_1007e38b0 */

void FUN_1007e38b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_1007e3260(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),param_3);
  return;
}



/* Address: 0x1007e38d0 | FUN_1007e38d0 */

uint FUN_1007e38d0(uint param_1)

{
  FUN_1007e36b0();
  return param_1 & 1;
}



/* Address: 0x1007e38f0 | FUN_1007e38f0 */

void FUN_1007e38f0(void)

{
  undefined *puVar1;
  
  if (DAT_100fe6848 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__FixedWidthInteger_100eac740;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__FixedWidthInteger_100eac740,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fe6848 = puVar1;
  return;
}



/* Address: 0x1007e3930 | FUN_1007e3930 */

void FUN_1007e3930(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1007e3940 | FUN_1007e3940 */

void FUN_1007e3940(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007e3548(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1007e394c | FUN_1007e394c */

void FUN_1007e394c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007e35fc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1007e3958 | thunk_FUN_1007e3930 */

void thunk_FUN_1007e3930(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1007e395c | FUN_1007e395c */

void FUN_1007e395c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ContiguousArray CVar2;
  
  uVar1 = 0;
  FUN_1007fa688(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20));
  FUN_1007f1084(param_1,uVar1);
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::removeAll(SUB81(param_1,0),CVar2);
  return;
}



/* Address: 0x1007e39bc | FUN_1007e39bc */

void FUN_1007e39bc(undefined8 param_1,undefined8 param_2,__int64 param_3,long param_4)

{
  undefined8 uVar1;
  ContiguousArray CVar2;
  
  uVar1 = 0;
  FUN_1007fa688(0,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x20));
  FUN_1007f1110(param_1,param_3,uVar1);
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::remove(param_3,CVar2);
  return;
}



/* Address: 0x1007e3a34 | FUN_1007e3a34 */

void FUN_1007e3a34(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ContiguousArray CVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  FUN_1007fa688(0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20));
  FUN_1007f1158(param_1,param_2,uVar1);
  local_40 = param_1;
  uStack_38 = param_2;
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RangeReplaceableCollection_100ead150
             ,CVar2.unknown);
  (extension_Swift)::Swift::RangeReplaceableCollection::_removeSubrange
            ((Range<(extension_in_Swift):Swift_RangeReplaceableCollection_removeSubrange(Swift_Range<A_Index>)__>___>
              )&local_40);
  return;
}



/* Address: 0x1007e3ac0 | FUN_1007e3ac0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e3b38 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007e3ac0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = 0;
  FUN_1007e0304(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20));
  pTVar2 = &TargetProtocolConformanceDescriptor_100c797a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c797a0,uVar1);
  Swift::RangeExpression::_relative(&local_50,pTVar2,uVar1,pTVar2,param_3,param_4);
  FUN_1007e3a34(local_50,uStack_48,param_2);
  return;
}



/* Address: 0x1007e3b64 | FUN_1007e3b64 */

void FUN_1007e3b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  ContiguousArray CVar3;
  __int64 _Var4;
  long unaff_x20;
  ContiguousArray CVar5;
  
  CVar5.unknown = *(undefined **)(unaff_x20 + 0x10);
  CVar3 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar3.unknown
            );
  bVar2 = (extension_Swift)::Swift::Collection::get_isEmpty();
  if (bVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e3c18);
    (*pcVar1)();
  }
  _Var4 = Swift::ContiguousArray::get_count(CVar5);
  if (!SBORROW8(_Var4,1)) {
    FUN_1007e39bc(param_1,param_2,_Var4 + -1,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e3c1c);
  (*pcVar1)();
}



/* Address: 0x1007e3c1c | FUN_1007e3c1c */

void FUN_1007e3c1c(__int64 param_1,long param_2)

{
  code *pcVar1;
  __int64 _Var2;
  undefined8 uVar3;
  ContiguousArray CVar4;
  long unaff_x20;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e3cd8);
    (*pcVar1)();
  }
  _Var2 = Swift::ContiguousArray::get_count((ContiguousArray)*(undefined **)(unaff_x20 + 0x10));
  if (param_1 <= _Var2) {
    uVar3 = 0;
    FUN_1007fa688(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20));
    FUN_1007f131c(param_1,uVar3);
    CVar4 = Swift::ContiguousArray::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__BidirectionalCollection_100ead120
               ,CVar4.unknown);
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RangeReplaceableCollection_100ead150
               ,CVar4.unknown);
    (extension_Swift)::Swift::RangeReplaceableCollection::_removeLast(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e3cdc);
  (*pcVar1)();
}



/* Address: 0x1007e3cdc | FUN_1007e3cdc */

void FUN_1007e3cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  ContiguousArray CVar3;
  
  CVar3 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar3.unknown
            );
  bVar2 = (extension_Swift)::Swift::Collection::get_isEmpty();
  if (!bVar2) {
    FUN_1007e39bc(param_1,param_2,0,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e3d74);
  (*pcVar1)();
}



/* Address: 0x1007e3d74 | FUN_1007e3d74 */

void FUN_1007e3d74(__int64 param_1,long param_2)

{
  code *pcVar1;
  __int64 _Var2;
  undefined8 uVar3;
  ContiguousArray CVar4;
  long unaff_x20;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e3e18);
    (*pcVar1)();
  }
  _Var2 = Swift::ContiguousArray::get_count((ContiguousArray)*(undefined **)(unaff_x20 + 0x10));
  if (param_1 <= _Var2) {
    uVar3 = 0;
    FUN_1007fa688(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20));
    FUN_1007f13b0(param_1,uVar3);
    CVar4 = Swift::ContiguousArray::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RangeReplaceableCollection_100ead150
               ,CVar4.unknown);
    (extension_Swift)::Swift::RangeReplaceableCollection::removeFirst(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e3e1c);
  (*pcVar1)();
}



/* Address: 0x1007e3e1c | FUN_1007e3e1c */

void FUN_1007e3e1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ContiguousArray CVar1;
  __int64 start;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_68;
  undefined8 uStack_60;
  undefined *local_58;
  
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar1);
  start = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(start + 0x10);
  FUN_100636dd8(start,uVar5);
  uVar4 = uVar6;
  local_68 = (undefined *)Swift::UnsafeMutableBufferPointer::_init(start);
  uStack_60 = uVar4;
  FUN_1007e4000(&local_58,&local_68);
  if (unaff_x21 == 0) {
    puVar2 = &DAT_100fe6850;
    FUN_1000f7830(&DAT_100fe6850,0x100c79a70);
    FUN_1007e37e8(&local_68,start,uVar6,unaff_x20 + 0x10,uVar5,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,puVar2,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    local_68 = local_58;
    puVar2 = &DAT_100fe6858;
    FUN_1000f7830(&DAT_100fe6858,0x100c79a78);
    puVar3 = puVar2;
    FUN_1007e40a0();
    FUN_1007e3ac0(&local_68,param_3,puVar2,puVar3);
  }
  else {
    puVar2 = &DAT_100fe6850;
    FUN_1000f7830(&DAT_100fe6850,0x100c79a70);
    FUN_1007e37e8(&local_68,start,uVar6,unaff_x20 + 0x10,uVar5,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,puVar2,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  return;
}



/* Address: 0x1007e3fa0 | FUN_1007e3fa0 */

void FUN_1007e3fa0(__int64 param_1,long param_2)

{
  undefined8 uVar1;
  ContiguousArray CVar2;
  
  uVar1 = 0;
  FUN_1007fa688(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20));
  FUN_1007f6b50(param_1,uVar1);
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::reserveCapacity(param_1,CVar2);
  return;
}



/* Address: 0x1007e4000 | FUN_1007e4000 */

void FUN_1007e4000(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x21;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  uVar2 = 0;
  FUN_1007fa688(0,param_6,param_8);
  FUN_1007ef370(uVar3,uVar1,param_4,param_5,uVar2,param_7);
  if (unaff_x21 == 0) {
    *param_1 = uVar3;
  }
  else {
    *param_9 = unaff_x21;
  }
  return;
}



/* Address: 0x1007e40a0 | FUN_1007e40a0 */

void FUN_1007e40a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fe6860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fe6858;
  FUN_1000f8b08(&DAT_100fe6858,0x100c79a78);
  puVar2 = PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200;
  _swift_getWitnessTable
            (PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200,puVar1)
  ;
  DAT_100fe6860 = puVar2;
  return;
}



/* Address: 0x1007e40f0 | FUN_1007e40f0 */

void FUN_1007e40f0(long param_1,long param_2)

{
  long lVar1;
  ContiguousArray CVar2;
  long lVar3;
  __int64 _Var4;
  int iVar5;
  int iVar6;
  long lVar7;
  __int64 _Var8;
  ulong uVar9;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(param_2 + 0x18);
  lVar7 = 0;
  _swift_getTupleTypeMetadata2(0,lVar1,lVar3,0,0);
  lVar11 = *(long *)(lVar7 + -8);
  uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar10 = auStack_70 + -uVar9;
  CVar2.unknown = *(undefined **)(unaff_x20 + 0x10);
  _Var4 = *(__int64 *)(unaff_x20 + 0x18);
  _Var8 = Swift::ContiguousArray::get_count(CVar2);
  if (_Var4 < _Var8) {
    local_68 = param_1;
    Swift::ContiguousArray::get_subscript(_Var4,(ContiguousArray)*(undefined **)(unaff_x20 + 8));
    Swift::ContiguousArray::get_subscript(_Var4,CVar2);
    *(__int64 *)(unaff_x20 + 0x18) = _Var4 + 1;
    (**(code **)(lVar11 + 0x20))(puVar10,(long)puVar10 - uVar9,lVar7);
    iVar5 = *(int *)(lVar7 + 0x30);
    lVar11 = 0;
    _swift_getTupleTypeMetadata2(0,lVar1,lVar3,"key value ",0);
    lVar7 = local_68;
    iVar6 = *(int *)(lVar11 + 0x30);
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(local_68,puVar10,lVar1);
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(lVar7 + iVar6,puVar10 + iVar5,lVar3);
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar7,0,1,lVar11);
    return;
  }
  lVar7 = 0;
  _swift_getTupleTypeMetadata2(0,lVar1,lVar3,"key value ",0);
                    /* WARNING: Could not recover jumptable at 0x0001007e42a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(param_1,1,1,lVar7);
  return;
}



/* Address: 0x1007e42ac | FUN_1007e42ac */

void FUN_1007e42ac(void)

{
  return;
}


