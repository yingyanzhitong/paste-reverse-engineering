/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100718588 | FUN_100718588 */

void FUN_100718588(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  Optional OVar2;
  ulong uVar3;
  CollectionOfOne CVar4;
  undefined7 extraout_var;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar8 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x28) = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  lVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar10,uVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x40) = lVar8;
  CVar4 = Swift::CollectionOfOne::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x48) = CVar4.unknown;
  uVar3 = *(long *)(*(long *)(CVar4.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x58) = CONCAT71(extraout_var,OVar2.value);
  lVar9 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x60) = lVar9;
  uVar3 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar5;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  uVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,uVar11,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar6;
  _swift_getAssociatedConformanceWitness
            (uVar10,uVar11,uVar6,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar10;
  plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10071873c;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x10071873c | FUN_10071873c */

void FUN_10071873c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007187a0;
  }
  else {
    pcVar1 = FUN_100718c68;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007187a0 | FUN_1007187a0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100718874 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007187a0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar14 = *(long *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
  pcVar8 = *(code **)(lVar14 + 0x30);
  *(code **)(unaff_x22 + 0xb8) = pcVar8;
  uVar4 = uVar7;
  (*pcVar8)(uVar7,1,uVar10);
  if ((int)uVar4 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))(uVar7,*(undefined8 *)(unaff_x22 + 0x58));
    uVar7 = 1;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
    lVar9 = *(long *)(unaff_x22 + 0x18);
    lVar1 = *(long *)(unaff_x22 + 0x20);
    pcVar8 = *(code **)(lVar14 + 0x20);
    *(code **)(unaff_x22 + 0xc0) = pcVar8;
    (*pcVar8)(uVar4,uVar7,uVar10);
    lVar9 = *(long *)(lVar1 + *(int *)(lVar9 + 0x34));
    *(long *)(unaff_x22 + 200) = lVar9;
    if (lVar9 != 1) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
      lVar14 = *(long *)(unaff_x22 + 0x78);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
      *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + 0x28);
      Swift::RangeReplaceableCollection::init();
      pcVar8 = *(code **)(lVar14 + 0x10);
      *(code **)(unaff_x22 + 0xd8) = pcVar8;
      (*pcVar8)(uVar7,uVar4,uVar10);
      Swift::RangeReplaceableCollection::_append();
      plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xe0) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_1007189f8;
      Swift::AsyncIteratorProtocol::_next();
      return;
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
    lVar9 = *(long *)(unaff_x22 + 0x18);
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 0x10))
              (*(undefined8 *)(unaff_x22 + 0x88),uVar2,uVar12);
    Swift::CollectionOfOne::init(uVar3,uVar4,uVar12);
    uVar4 = *(undefined8 *)(lVar9 + 0x28);
    puVar5 = PTR_Swift__Swift__CollectionOfOne<undefined>_>Swift__Sequence_100ead040;
    _swift_getWitnessTable
              (PTR_Swift__Swift__CollectionOfOne<undefined>_>Swift__Sequence_100ead040,uVar7);
    Swift::RangeReplaceableCollection::_init(uVar10,uVar3,uVar7,puVar5,uVar11,uVar4);
    (**(code **)(lVar14 + 8))(uVar2,uVar12);
    uVar7 = 0;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar7,1,*(undefined8 *)(unaff_x22 + 0x28));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000100718944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007189f8 | FUN_1007189f8 */

void FUN_1007189f8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xe0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100718a5c;
  }
  else {
    pcVar1 = FUN_100718cfc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100718a5c | FUN_100718a5c */

void FUN_100718a5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  __int64 _Var4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  
  puVar8 = (undefined8 *)(unaff_x22 + 0x68);
  uVar12 = *puVar8;
  puVar14 = (undefined8 *)(unaff_x22 + 0x40);
  uVar7 = *puVar14;
  uVar3 = uVar12;
  (**(code **)(unaff_x22 + 0xb8))(uVar12,1,uVar7);
  if ((int)uVar3 == 1) {
    lVar9 = *(long *)(unaff_x22 + 0x60);
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(*(undefined8 *)(unaff_x22 + 0x90),uVar7);
    pcVar11 = *(code **)(lVar9 + 8);
    puVar14 = (undefined8 *)(unaff_x22 + 0x58);
  }
  else {
    pcVar11 = *(code **)(unaff_x22 + 0xd8);
    lVar9 = *(long *)(unaff_x22 + 200);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar6 = *(long *)(unaff_x22 + 0x78);
    (**(code **)(unaff_x22 + 0xc0))(uVar3,uVar12,uVar7);
    (*pcVar11)(uVar1,uVar3,uVar7);
    Swift::RangeReplaceableCollection::_append();
    _Var4 = Swift::Collection::get_count();
    pcVar11 = *(code **)(lVar6 + 8);
    (*pcVar11)(uVar3,uVar7);
    if (_Var4 != lVar9) {
      plVar5 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xe0) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1007189f8;
      Swift::AsyncIteratorProtocol::_next();
      return;
    }
    puVar8 = (undefined8 *)(unaff_x22 + 0x90);
  }
  lVar9 = *(long *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x10);
  (*pcVar11)(*puVar8,*puVar14);
  (**(code **)(lVar9 + 0x20))(uVar12,uVar3,uVar7);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),0,1,*(undefined8 *)(unaff_x22 + 0x28));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100718c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100718c68 | FUN_100718c68 */

void FUN_100718c68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100718cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100718cfc | FUN_100718cfc */

void FUN_100718cfc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar4 = *(long *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x28));
  (**(code **)(lVar4 + 8))(uVar3,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000100718db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100718db8 | FUN_100718db8 */

void FUN_100718db8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100718588(plVar1,param_1,param_2);
  return;
}



/* Address: 0x100718e20 | FUN_100718e20 */

undefined8 FUN_100718e20(long param_1)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x34));
}



/* Address: 0x100718e2c | FUN_100718e2c */

void FUN_100718e2c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar5 = *(long *)(lVar3 + -8);
  lVar2 = *(long *)(lVar5 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,lVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar1 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  (**(code **)(lVar5 + 0x10))(&stack0xffffffffffffffb0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  Swift::AsyncSequence::_makeAsyncIterator();
  FUN_1007184d8(param_1,(long)(&stack0xffffffffffffffb0 + -(lVar2 + 0xfU & 0xfffffffffffffff0)) -
                        (lVar1 + 0xfU & 0xfffffffffffffff0),
                *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x34)),lVar3,
                *(undefined8 *)(param_2 + 0x18),uVar4,*(undefined8 *)(param_2 + 0x28));
  return;
}



/* Address: 0x100718f14 | FUN_100718f14 */

void FUN_100718f14(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c74948,param_1);
  return;
}



/* Address: 0x100718f24 | FUN_100718f24 */

void FUN_100718f24(long param_1)

{
  FUN_100718e2c();
                    /* WARNING: Could not recover jumptable at 0x000100718f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x100718f54 | FUN_100718f54 */

void FUN_100718f54(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x30);
  }
  return;
}



/* Address: 0x100718fcc | FUN_100718fcc */

long * FUN_100718fcc(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar3 = *(long *)(lVar2 + 0x40);
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) == 0 && (lVar3 + 7U & 0xfffffffffffffff8) + 8 < 0x19) {
    (**(code **)(lVar2 + 0x10))(param_1);
    *(undefined8 *)((long)param_1 + lVar3 + 7 & 0xfffffffffffffff8) =
         *(undefined8 *)((long)param_2 + lVar3 + 7 & 0xfffffffffffffff8);
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100719078 | FUN_100719078 */

long FUN_100719078(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar1 + 0x10))();
  lVar1 = *(long *)(lVar1 + 0x40) + 7;
  *(undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x1007190d4 | FUN_1007190d4 */

long FUN_1007190d4(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar1 + 0x18))();
  lVar1 = *(long *)(lVar1 + 0x40) + 7;
  *(undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x100719130 | FUN_100719130 */

long FUN_100719130(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar1 + 0x20))();
  lVar1 = *(long *)(lVar1 + 0x40) + 7;
  *(undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x10071918c | FUN_10071918c */

long FUN_10071918c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar1 + 0x28))();
  lVar1 = *(long *)(lVar1 + 0x40) + 7;
  *(undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x1007191e8 | FUN_1007191e8 */

uint * FUN_1007191e8(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar7 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar7 + 0x54);
  if (uVar5 <= param_2 && param_2 - uVar5 != 0) {
    uVar1 = (*(long *)(lVar7 + 0x40) + 7U & 0xfffffffffffffff8) + 8;
    uVar2 = uVar1 & 0xfffffff8;
    uVar6 = (uint)uVar2;
    uVar8 = 2;
    uVar4 = uVar8;
    if (uVar2 == 0) {
      uVar4 = (param_2 - uVar5) + 1;
    }
    if (0xffff < uVar4) {
      uVar8 = 4;
    }
    if (uVar4 < 0x100) {
      uVar8 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar8;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar8 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
      goto LAB_100719264;
    }
    else if (uVar3 == 2) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar1);
      if (*(ushort *)((long)param_1 + uVar1) != 0) {
LAB_100719264:
        uVar8 = uVar8 - 1;
        if (uVar2 != 0) {
          uVar8 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar5 + (uVar6 | uVar8) + 1);
      }
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar1);
      if (uVar8 != 0) goto LAB_100719264;
    }
    if (uVar5 == 0) {
      return (uint *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100719298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x30))();
  return param_1;
}



/* Address: 0x1007192a4 | FUN_1007192a4 */

void FUN_1007192a4(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  lVar5 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar3 = *(uint *)(lVar5 + 0x54);
  sVar1 = (*(long *)(lVar5 + 0x40) + 7U & 0xfffffffffffffff8) + 8;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    uVar7 = 0;
    iVar4 = param_2 - uVar3;
    if (uVar3 <= param_2 && iVar4 != 0) goto LAB_100719334;
  }
  else {
    uVar6 = 2;
    uVar2 = uVar6;
    if ((int)sVar1 == 0) {
      uVar2 = (param_3 - uVar3) + 1;
    }
    if (0xffff < uVar2) {
      uVar6 = 4;
    }
    if (uVar2 < 0x100) {
      uVar6 = 1;
    }
    uVar7 = 0;
    if (1 < uVar2) {
      uVar7 = uVar6;
    }
    iVar4 = param_2 - uVar3;
    if (uVar3 <= param_2 && iVar4 != 0) {
LAB_100719334:
      if ((int)sVar1 != 0) {
        iVar4 = 1;
        _bzero(param_1,sVar1);
        *param_1 = param_2 + ~uVar3;
      }
      if (uVar7 < 2) {
        if (uVar7 == 0) {
          return;
        }
        *(char *)((long)param_1 + sVar1) = (char)iVar4;
        return;
      }
      if (uVar7 == 2) {
        *(short *)((long)param_1 + sVar1) = (short)iVar4;
        return;
      }
      *(int *)((long)param_1 + sVar1) = iVar4;
      return;
    }
  }
  if (uVar7 < 2) {
    if (uVar7 != 0) {
      *(undefined1 *)((long)param_1 + sVar1) = 0;
    }
  }
  else if (uVar7 == 2) {
    *(undefined2 *)((long)param_1 + sVar1) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + sVar1) = 0;
  }
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100719394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x38))();
  return;
}



/* Address: 0x1007193cc | FUN_1007193cc */

void FUN_1007193cc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x30);
  }
  return;
}



/* Address: 0x100719458 | FUN_100719458 */

long * FUN_100719458(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar3 = *(long *)(lVar2 + -8);
  lVar4 = *(long *)(lVar3 + 0x40);
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) == 0 && (lVar4 + 7U & 0xfffffffffffffff8) + 8 < 0x19) {
    (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar2);
    *(undefined8 *)((long)param_1 + lVar4 + 7 & 0xfffffffffffffff8) =
         *(undefined8 *)((long)param_2 + lVar4 + 7 & 0xfffffffffffffff8);
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100719528 | FUN_100719528 */

void FUN_100719528(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
                    /* WARNING: Could not recover jumptable at 0x000100719574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return;
}



/* Address: 0x100719578 | FUN_100719578 */

long FUN_100719578(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar2 + 0x40) + 7;
  *(undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x1007195fc | FUN_1007195fc */

long FUN_1007195fc(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x18))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar2 + 0x40) + 7;
  *(undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x100719680 | FUN_100719680 */

long FUN_100719680(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x20))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar2 + 0x40) + 7;
  *(undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x100719704 | FUN_100719704 */

long FUN_100719704(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x28))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar2 + 0x40) + 7;
  *(undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x100719788 | FUN_100719788 */

uint * FUN_100719788(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar7 = *(long *)(lVar6 + -8);
  uVar5 = *(uint *)(lVar7 + 0x54);
  if (uVar5 <= param_2 && param_2 - uVar5 != 0) {
    uVar1 = (*(long *)(lVar7 + 0x40) + 7U & 0xfffffffffffffff8) + 8;
    uVar2 = uVar1 & 0xfffffff8;
    uVar8 = (uint)uVar2;
    uVar9 = 2;
    uVar4 = uVar9;
    if (uVar2 == 0) {
      uVar4 = (param_2 - uVar5) + 1;
    }
    if (0xffff < uVar4) {
      uVar9 = 4;
    }
    if (uVar4 < 0x100) {
      uVar9 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar9;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
      goto LAB_100719834;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar1);
      if (*(ushort *)((long)param_1 + uVar1) != 0) {
LAB_100719834:
        uVar9 = uVar9 - 1;
        if (uVar2 != 0) {
          uVar9 = 0;
          uVar8 = *param_1;
        }
        return (uint *)(ulong)(uVar5 + (uVar8 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar1);
      if (uVar9 != 0) goto LAB_100719834;
    }
    if (uVar5 == 0) {
      return (uint *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100719874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x30))(param_1,uVar5,lVar6);
  return param_1;
}



/* Address: 0x100719888 | FUN_100719888 */

void FUN_100719888(int *param_1,undefined8 param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar5 = *(long *)(lVar4 + -8);
  uVar3 = *(uint *)(lVar5 + 0x54);
  sVar1 = (*(long *)(lVar5 + 0x40) + 7U & 0xfffffffffffffff8) + 8;
  uVar8 = (uint)param_2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    uVar9 = 0;
    iVar6 = uVar8 - uVar3;
    if (uVar3 <= uVar8 && iVar6 != 0) goto LAB_100719940;
  }
  else {
    uVar7 = 2;
    uVar2 = uVar7;
    if ((int)sVar1 == 0) {
      uVar2 = (param_3 - uVar3) + 1;
    }
    if (0xffff < uVar2) {
      uVar7 = 4;
    }
    if (uVar2 < 0x100) {
      uVar7 = 1;
    }
    uVar9 = 0;
    if (1 < uVar2) {
      uVar9 = uVar7;
    }
    iVar6 = uVar8 - uVar3;
    if (uVar3 <= uVar8 && iVar6 != 0) {
LAB_100719940:
      if ((int)sVar1 != 0) {
        iVar6 = 1;
        _bzero(param_1,sVar1);
        *param_1 = uVar8 + ~uVar3;
      }
      if (uVar9 < 2) {
        if (uVar9 == 0) {
          return;
        }
        *(char *)((long)param_1 + sVar1) = (char)iVar6;
        return;
      }
      if (uVar9 == 2) {
        *(short *)((long)param_1 + sVar1) = (short)iVar6;
        return;
      }
      *(int *)((long)param_1 + sVar1) = iVar6;
      return;
    }
  }
  if (uVar9 < 2) {
    if (uVar9 != 0) {
      *(undefined1 *)((long)param_1 + sVar1) = 0;
    }
  }
  else if (uVar9 == 2) {
    *(undefined2 *)((long)param_1 + sVar1) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + sVar1) = 0;
  }
  if (uVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007199a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x38))(param_1,param_2,uVar3,lVar4);
  return;
}



/* Address: 0x1007199dc | thunk_FUN_100718e20 */

undefined8 thunk_FUN_100718e20(long param_1)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x34));
}



/* Address: 0x1007199e0 | FUN_1007199e0 */

void FUN_1007199e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_5,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
                    /* WARNING: Could not recover jumptable at 0x000100719a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
  return;
}



/* Address: 0x100719a38 | FUN_100719a38 */

void FUN_100719a38(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  Optional OVar2;
  Optional OVar3;
  ulong uVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  lVar9 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x20) = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar9;
  uVar4 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar4;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x38) = CONCAT71(extraout_var,OVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x40) = CONCAT71(extraout_var_00,OVar3.value);
  lVar9 = *(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8);
  *(long *)(unaff_x22 + 0x48) = lVar9;
  uVar4 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar4;
  lVar9 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x58) = lVar9;
  uVar4 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar10;
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar8;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,uVar8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar10,uVar8,uVar6,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100719b90;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100719b90 | FUN_100719b90 */

void FUN_100719b90(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100719bf4;
  }
  else {
    pcVar1 = FUN_100719df0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100719bf4 | FUN_100719bf4 */

void FUN_100719bf4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  code *pcVar10;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar8 = uVar6;
  (**(code **)(lVar1 + 0x30))(uVar6,1,uVar7);
  if ((int)uVar8 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0x40));
    uVar6 = 1;
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar2 = *(long *)(unaff_x22 + 0x28);
    pcVar10 = *(code **)(lVar1 + 0x20);
    (*pcVar10)(uVar9,uVar6,uVar7);
    (*pcVar10)(uVar8,uVar9,uVar7);
    (**(code **)(lVar2 + 0x30))(uVar8,1,uVar3);
    if ((int)uVar8 == 1) {
      (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))
                (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x38));
      puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
      uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar7 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar6,uVar8,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
      _swift_getAssociatedConformanceWitness
                (uVar6,uVar8,uVar7,puVar4,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar5 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x80) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_100719b90;
      Swift::AsyncIteratorProtocol::_next();
      return;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
    pcVar10 = *(code **)(*(long *)(unaff_x22 + 0x28) + 0x20);
    (*pcVar10)(uVar6,*(undefined8 *)(unaff_x22 + 0x60),uVar8);
    (*pcVar10)(uVar7,uVar6,uVar8);
    uVar6 = 0;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  (**(code **)(*(long *)(unaff_x22 + 0x28) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar6,1,*(undefined8 *)(unaff_x22 + 0x20));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100719dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100719df0 | FUN_100719df0 */

void FUN_100719df0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100719e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100719e54 | FUN_100719e54 */

void FUN_100719e54(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100719a38(plVar1,param_1,param_2);
  return;
}



/* Address: 0x100719ebc | FUN_100719ebc */

void FUN_100719ebc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  lVar2 = *(long *)(lVar4 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(long *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar5 = *(long *)(lVar1 + -8);
  lVar3 = *(long *)(lVar5 + 0x40);
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffa0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  Swift::AsyncSequence::_makeAsyncIterator();
  (**(code **)(lVar5 + 0x20))
            (param_1,(long)(&stack0xffffffffffffffa0 + -(lVar2 + 0xfU & 0xfffffffffffffff0)) -
                     (lVar3 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Address: 0x100719f9c | FUN_100719f9c */

void FUN_100719f9c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c74a48,param_1);
  return;
}



/* Address: 0x100719fac | FUN_100719fac */

void FUN_100719fac(long param_1)

{
  FUN_100719ebc();
                    /* WARNING: Could not recover jumptable at 0x000100719fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x100719fdc | FUN_100719fdc */

void FUN_100719fdc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x28);
  }
  return;
}



/* Address: 0x10071a048 | FUN_10071a048 */

void FUN_10071a048(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10071a054 | FUN_10071a054 */

void FUN_10071a054(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x28);
  }
  return;
}



/* Address: 0x10071a0d4 | FUN_10071a0d4 */

long * FUN_10071a0d4(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(uint *)(lVar2 + 0x50) & 0xff;
  if (((uint)uVar3 < 8 && *(ulong *)(lVar2 + 0x40) < 0x19) &&
      (*(uint *)(lVar2 + 0x50) & 0x100000) == 0) {
    (**(code **)(lVar2 + 0x10))(param_1,param_2,lVar1);
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10071a16c | FUN_10071a16c */

undefined8 FUN_10071a16c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  return param_1;
}



/* Address: 0x10071a1c8 | FUN_10071a1c8 */

undefined8 FUN_10071a1c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))(param_1,param_2,lVar1);
  return param_1;
}



/* Address: 0x10071a224 | FUN_10071a224 */

undefined8 FUN_10071a224(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
  return param_1;
}



/* Address: 0x10071a280 | FUN_10071a280 */

undefined8 FUN_10071a280(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_1,param_2,lVar1);
  return param_1;
}



/* Address: 0x10071a2dc | FUN_10071a2dc */

uint * FUN_10071a2dc(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_10071a3a4;
  uVar7 = *(ulong *)(lVar5 + 0x40);
  uVar6 = (uint)uVar7;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (0xff < uVar8) {
      if (uVar8 >> 0x10 == 0) {
        uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
      }
      else {
        uVar8 = *(uint *)((long)param_1 + uVar7);
      }
      goto LAB_10071a33c;
    }
    if (1 < uVar8) goto LAB_10071a338;
  }
  else {
LAB_10071a338:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
LAB_10071a33c:
    if (uVar8 != 0) {
      uVar1 = 0;
      if (uVar6 < 4) {
        uVar1 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
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
      return (uint *)(ulong)(uVar2 + ((uint)uVar7 | uVar1) + 1);
    }
  }
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
LAB_10071a3a4:
                    /* WARNING: Could not recover jumptable at 0x00010071a3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x30))(param_1,uVar2,lVar4);
  return param_1;
}



/* Address: 0x10071a414 | FUN_10071a414 */

void FUN_10071a414(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar4 = *(long *)(lVar3 + -8);
  uVar1 = *(uint *)(lVar4 + 0x54);
  sVar6 = *(size_t *)(lVar4 + 0x40);
  uVar5 = (uint)sVar6;
  if (param_3 < uVar1 || param_3 - uVar1 == 0) {
    bVar9 = 0;
  }
  else if (uVar5 < 4) {
    uVar7 = ((param_3 - uVar1) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f))
            + 1;
    bVar9 = 2;
    if (0xffff < uVar7) {
      bVar9 = 4;
    }
    if (uVar7 < 0x100) {
      bVar9 = 1 < uVar7;
    }
  }
  else {
    bVar9 = 1;
  }
  uVar7 = (uint)param_2;
  if (uVar1 < uVar7) {
    uVar7 = uVar7 + ~uVar1;
    if (uVar5 < 4) {
      iVar8 = (uVar7 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar1 = uVar7 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar6);
        uVar2 = (undefined2)uVar1;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)uVar7;
        }
      }
    }
    else {
      _bzero(param_1,sVar6);
      *param_1 = uVar7;
      iVar8 = 1;
    }
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(char *)((long)param_1 + sVar6) = (char)iVar8;
      }
    }
    else if (bVar9 == 2) {
      *(short *)((long)param_1 + sVar6) = (short)iVar8;
    }
    else {
      *(int *)((long)param_1 + sVar6) = iVar8;
    }
  }
  else {
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(undefined1 *)((long)param_1 + sVar6) = 0;
      }
    }
    else if (bVar9 == 2) {
      *(undefined2 *)((long)param_1 + sVar6) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar6) = 0;
    }
    if (uVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010071a584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x38))(param_1,param_2,uVar1,lVar3);
      return;
    }
  }
  return;
}



/* Address: 0x10071a5e8 | FUN_10071a5e8 */

void FUN_10071a5e8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10071a5f4 | FUN_10071a5f4 */

void FUN_10071a5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100efc4f0;
  _swift_allocObject(&DAT_100efc4f0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  FUN_10071a8ac(param_1,param_2,&DAT_100c74b38,puVar1,param_5,param_6,param_7);
  _swift_retain(param_4);
  _swift_release(puVar1);
  return;
}



/* Address: 0x10071a69c | FUN_10071a69c */

void FUN_10071a69c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(long *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar2 = *(long *)(param_6 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar1;
  _swift_task_switch(FUN_10071a700,0,0);
  return;
}



/* Address: 0x10071a700 | FUN_10071a700 */

void FUN_10071a700(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0x38) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x10),
             *(undefined8 *)(unaff_x22 + 0x30));
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10071a780;
                    /* WARNING: Could not recover jumptable at 0x00010071a77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (plVar2,*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x40),
             *(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Address: 0x10071a780 | FUN_10071a780 */

void FUN_10071a780(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x40);
  uVar2 = *(undefined8 *)(lVar4 + 0x30);
  lVar3 = *(long *)(lVar4 + 0x38);
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x48));
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010071a7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Address: 0x10071a7e8 | FUN_10071a7e8 */

void FUN_10071a7e8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x10071a80c | FUN_10071a80c */

void FUN_10071a80c(undefined8 param_1,undefined8 param_2)

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
  plVar5 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005c804c;
  FUN_10071a69c(param_1,param_2,uVar4,uVar6,uVar1,uVar3,uVar2);
  return;
}



/* Address: 0x10071a8ac | FUN_10071a8ac */

void FUN_10071a8ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar5 = *(long *)(param_6 + -8);
  puVar3 = auStack_70 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(param_5 + -8);
  lVar4 = (long)puVar3 - (*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_68 = param_3;
  (**(code **)(lVar2 + 0x10))(lVar4);
  (**(code **)(lVar5 + 0x10))(puVar3,param_2,param_6);
  (**(code **)(lVar2 + 0x20))(param_1,lVar4,param_5);
  lVar2 = 0;
  FUN_10071aa6c(0,param_5,param_6,param_7);
  (**(code **)(lVar5 + 0x20))(param_1 + *(int *)(lVar2 + 0x2c),puVar3,param_6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x30));
  *puVar1 = local_68;
  puVar1[1] = param_4;
  _swift_retain(param_4);
  return;
}



/* Address: 0x10071a9c8 | FUN_10071a9c8 */

void FUN_10071a9c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  
  (**(code **)(*(long *)(param_6 + -8) + 0x20))(param_1,param_2,param_6);
  lVar2 = 0;
  FUN_10071aa6c(0,param_6,param_7,param_8);
  (**(code **)(*(long *)(param_7 + -8) + 0x20))(param_1 + *(int *)(lVar2 + 0x2c),param_3,param_7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x30));
  *puVar1 = param_4;
  puVar1[1] = param_5;
  return;
}



/* Address: 0x10071aa6c | FUN_10071aa6c */

void FUN_10071aa6c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10071aa78 | FUN_10071aa78 */

void FUN_10071aa78(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010071aa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x18) + -8) + 0x10))
            (param_1,unaff_x20 + *(int *)(param_2 + 0x2c));
  return;
}



/* Address: 0x10071aa94 | FUN_10071aa94 */

void FUN_10071aa94(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x2c);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010071aad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x10))
            (param_1,unaff_x20 + iVar1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x10071aadc | FUN_10071aadc */

void FUN_10071aadc(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x2c);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010071ab20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x28))
            (unaff_x20 + iVar1,param_1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x10071ab24 | thunk_FUN_1001f646c */

void thunk_FUN_1001f646c(void)

{
  FUN_1001f646c();
  return;
}



/* Address: 0x10071ab28 | FUN_10071ab28 */

void FUN_10071ab28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  Optional OVar2;
  long lVar3;
  long lVar4;
  undefined7 extraout_var;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  lVar3 = 0;
  FUN_10071ac4c(0,param_6,param_7,param_8);
  lVar7 = (long)*(int *)(lVar3 + 0x2c);
  lVar5 = *(long *)(param_7 + -8);
  pcVar6 = *(code **)(lVar5 + 0x38);
  (*pcVar6)(param_1 + lVar7,1,1,param_7);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 8))
            (param_1 + lVar7,CONCAT71(extraout_var,OVar2.value));
  (**(code **)(lVar5 + 0x20))(param_1 + lVar7,param_3,param_7);
  (*pcVar6)(param_1 + lVar7,0,1,param_7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x30));
  *puVar1 = param_4;
  puVar1[1] = param_5;
  return;
}


