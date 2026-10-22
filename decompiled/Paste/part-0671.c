/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10071e2d8 | FUN_10071e2d8 */

void FUN_10071e2d8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_90;
  long local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar4 = *(long *)(param_4 + -8);
  lVar2 = (long)&local_90 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = *(long *)(param_3 + -8);
  lVar3 = lVar2 - (*(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_90 = param_7;
  (**(code **)(lVar1 + 0x10))(lVar3);
  (**(code **)(lVar4 + 0x10))(lVar2,param_2,param_4);
  (**(code **)(lVar1 + 0x20))(param_1,lVar3,param_3);
  local_68 = local_90;
  lVar1 = 0;
  local_88 = param_3;
  lStack_80 = param_4;
  local_78 = param_5;
  uStack_70 = param_6;
  FUN_10071e47c(0,&local_88);
  (**(code **)(lVar4 + 0x20))(param_1 + *(int *)(lVar1 + 0x3c),lVar2,param_4);
  return;
}



/* Address: 0x10071e3e0 | FUN_10071e3e0 */

void FUN_10071e3e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_2);
  lVar1 = 0;
  local_78 = param_4;
  lStack_70 = param_5;
  local_68 = param_6;
  uStack_60 = param_7;
  local_58 = param_8;
  FUN_10071e47c(0,&local_78);
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1 + *(int *)(lVar1 + 0x3c),param_3,param_5);
  return;
}



/* Address: 0x10071e47c | FUN_10071e47c */

void FUN_10071e47c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbd6f0);
  return;
}



/* Address: 0x10071e488 | FUN_10071e488 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010071e604 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10071e488(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ContiguousArray CVar6;
  long lVar7;
  ContiguousArray<undefined> CVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  String SVar16;
  undefined8 auStack_70 [2];
  
  lVar11 = *(long *)(param_2 + 0x18);
  lVar15 = *(long *)(lVar11 + -8);
  uVar9 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)(&stack0xffffffffffffffa0 + -uVar9) - uVar9;
  puVar13 = (undefined8 *)
            (lVar12 - (*(long *)(*(long *)(param_2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(param_2 + -8) + 0x10))(puVar13);
  puVar4 = puVar13;
  _swift_getEnumCaseMultiPayload(puVar13,param_2);
  if ((int)puVar4 == 2) {
    uVar10 = *puVar13;
    *param_1 = uVar10;
    param_1[1] = 0;
    param_1[2] = uVar10;
    _swift_storeEnumTagMultiPayload(param_1,param_2,3);
    _swift_retain(uVar10);
  }
  else {
    if ((int)puVar4 != 0) {
      *(undefined4 *)(puVar13 + -1) = 0;
      puVar13[-2] = 0x32;
      SVar16.bridgeObject = (void *)0x2;
      SVar16.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar16,(StaticString)0xd000000000000020,
                 0x8000000100db1280,0xdb1260);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10071e6a4);
      (*pcVar3)();
    }
    (**(code **)(lVar15 + 0x20))(lVar12,puVar13,lVar11);
    puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
    uVar14 = *(undefined8 *)(param_2 + 0x28);
    uVar10 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar14,lVar11,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    uVar5 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar14,lVar11,puVar2,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    CVar6 = Swift::ContiguousArray::typeMetadataAccessor();
    lVar7 = 0;
    _swift_getTupleTypeMetadata2(0,uVar10,CVar6.unknown,0,0);
    iVar1 = *(int *)(lVar7 + 0x30);
    (**(code **)(lVar15 + 0x10))(&stack0xffffffffffffffa0 + -uVar9,lVar12,lVar11);
    Swift::AsyncSequence::_makeAsyncIterator();
    Swift::Array<undefined>::_allocateUninitialized(0,uVar5);
    CVar8 = Swift::ContiguousArray::_init(lVar7,uVar5);
    (**(code **)(lVar15 + 8))(lVar12,lVar11);
    *(undefined **)((long)param_1 + (long)iVar1) = CVar8.unknown;
    _swift_storeEnumTagMultiPayload(param_1,param_2,1);
  }
  return;
}



/* Address: 0x10071e6a4 | FUN_10071e6a4 */

void FUN_10071e6a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined8 uVar8;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar7;
  uVar8 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar8;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar7,uVar8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x48) = lVar3;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x50) = CONCAT71(extraout_var,OVar2.value);
  lVar6 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x58) = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar4;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar5;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar5;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar4;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar8,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x90) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  lVar3 = *(long *)(param_3 + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar4;
  _swift_task_switch(FUN_10071e7fc,0,0);
  return;
}



/* Address: 0x10071e7fc | FUN_10071e7fc */

void FUN_10071e7fc(void)

{
  ContiguousArray CVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  String SVar14;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
  (**(code **)(*(long *)(unaff_x22 + 0xa8) + 0x10))(uVar13,*(undefined8 *)(unaff_x22 + 0x30),uVar6);
  _swift_getEnumCaseMultiPayload(uVar13,uVar6);
  if ((int)uVar13 == 3) {
    puVar5 = *(undefined8 **)(unaff_x22 + 0xb0);
    CVar1.unknown = (undefined *)*puVar5;
    lVar10 = puVar5[1];
    uVar13 = puVar5[2];
    uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
    if (lVar10 == *(long *)(CVar1.unknown + 0x10)) {
      lVar10 = *(long *)(unaff_x22 + 0x68);
      puVar5 = *(undefined8 **)(unaff_x22 + 0x20);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x18);
      _swift_release(CVar1.unknown);
      (**(code **)(lVar10 + 0x38))(uVar9,1,1,uVar6);
      *puVar5 = uVar13;
      uVar6 = 2;
    }
    else {
      Swift::ContiguousArray::get_subscript(lVar10,CVar1);
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10071eafc);
        (*pcVar4)();
      }
      uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
      lVar2 = *(long *)(unaff_x22 + 0x68);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
      puVar5 = *(undefined8 **)(unaff_x22 + 0x20);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x18);
      pcVar4 = *(code **)(lVar2 + 0x20);
      (*pcVar4)(uVar6,*(undefined8 *)(unaff_x22 + 0x70),uVar9);
      (*pcVar4)(uVar12,uVar6,uVar9);
      (**(code **)(lVar2 + 0x38))(uVar12,0,1,uVar9);
      *puVar5 = CVar1.unknown;
      puVar5[1] = lVar10 + 1;
      puVar5[2] = uVar13;
      uVar6 = 3;
    }
    _swift_storeEnumTagMultiPayload(puVar5,uVar8,uVar6);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010071eaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if ((int)uVar13 == 1) {
    lVar7 = *(long *)(unaff_x22 + 0xb0);
    lVar10 = *(long *)(unaff_x22 + 0x98);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
    CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
    *(undefined **)(unaff_x22 + 0xb8) = CVar1.unknown;
    lVar2 = 0;
    _swift_getTupleTypeMetadata2(0,uVar8,CVar1.unknown,0,0);
    *(long *)(unaff_x22 + 0xc0) = lVar2;
    uVar12 = *(undefined8 *)(lVar7 + *(int *)(lVar2 + 0x30));
    *(undefined8 *)(unaff_x22 + 200) = uVar12;
    pcVar4 = *(code **)(lVar10 + 0x20);
    *(code **)(unaff_x22 + 0xd0) = pcVar4;
    (*pcVar4)(uVar13,lVar7,uVar8);
    *(undefined8 *)(unaff_x22 + 0x10) = uVar12;
    _swift_getAssociatedConformanceWitness
              (uVar9,uVar6,uVar8,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar3 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xd8) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10071eafc;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  SVar14.bridgeObject = (void *)0x2;
  SVar14.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar14,(StaticString)0xd000000000000020,0x8000000100db1280,
             0xdb1260);
  return;
}



/* Address: 0x10071eafc | FUN_10071eafc */

void FUN_10071eafc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10071eb60;
  }
  else {
    pcVar1 = FUN_10071ed34;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10071eb60 | FUN_10071eb60 */

void FUN_10071eb60(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar1 = *(long *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = uVar6;
  (**(code **)(lVar1 + 0x30))(uVar6,1,uVar9);
  if ((int)uVar4 == 1) {
    uVar14 = *(undefined8 *)(unaff_x22 + 200);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar2 = *(long *)(unaff_x22 + 0x58);
    puVar5 = *(undefined8 **)(unaff_x22 + 0x20);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x18);
    (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))
              (*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x90));
    (**(code **)(lVar2 + 8))(uVar6,uVar4);
    (**(code **)(lVar1 + 0x38))(uVar12,1,1,uVar9);
    *puVar5 = uVar14;
    uVar6 = 2;
  }
  else {
    pcVar8 = *(code **)(unaff_x22 + 0xd0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar2 = *(long *)(unaff_x22 + 0xc0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
    puVar5 = *(undefined8 **)(unaff_x22 + 0x20);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x18);
    pcVar11 = *(code **)(lVar1 + 0x20);
    (*pcVar11)(uVar12,uVar6,uVar9);
    (**(code **)(lVar1 + 0x10))(uVar13,uVar12,uVar9);
    Swift::ContiguousArray::append(uVar13,uVar4);
    (*pcVar11)(uVar15,uVar12,uVar9);
    (**(code **)(lVar1 + 0x38))(uVar15,0,1,uVar9);
    iVar3 = *(int *)(lVar2 + 0x30);
    (*pcVar8)(puVar5,uVar7,uVar14);
    *(undefined8 *)((long)puVar5 + (long)iVar3) = *(undefined8 *)(unaff_x22 + 0x10);
    uVar6 = 1;
  }
  _swift_storeEnumTagMultiPayload(puVar5,uVar10,uVar6);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010071ed30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10071ed34 | FUN_10071ed34 */

void FUN_10071ed34(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar1 = *(long *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_release(*(undefined8 *)(unaff_x22 + 200));
  (**(code **)(lVar1 + 8))(uVar4,uVar5);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010071edec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10071edf0 | FUN_10071edf0 */

void FUN_10071edf0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = *(undefined8 *)(param_2 + 0x30);
  uStack_48 = *(undefined8 *)(param_2 + 0x18);
  local_50 = *(undefined8 *)(param_2 + 0x10);
  uStack_38 = *(undefined8 *)(param_2 + 0x28);
  uStack_40 = *(undefined8 *)(param_2 + 0x20);
  lVar1 = 0;
  FUN_100721ae8(0,&local_50);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x10071ee48 | FUN_10071ee48 */

void FUN_10071ee48(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = *(undefined8 *)(param_2 + 0x30);
  uStack_48 = *(undefined8 *)(param_2 + 0x18);
  local_50 = *(undefined8 *)(param_2 + 0x10);
  uStack_38 = *(undefined8 *)(param_2 + 0x28);
  uStack_40 = *(undefined8 *)(param_2 + 0x20);
  lVar1 = 0;
  FUN_100721ae8(0,&local_50);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))();
  return;
}



/* Address: 0x10071eea0 | FUN_10071eea0 */

void FUN_10071eea0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,lVar2,param_5,0,0);
  iVar1 = *(int *)(lVar3 + 0x30);
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1 + iVar1,param_3,param_5);
  uVar4 = 0;
  local_88 = param_4;
  lStack_80 = param_5;
  local_78 = param_6;
  uStack_70 = param_7;
  local_68 = param_8;
  FUN_100721ae8(0,&local_88);
  _swift_storeEnumTagMultiPayload(param_1,uVar4,0);
  return;
}



/* Address: 0x10071ef94 | FUN_10071ef94 */

void FUN_10071ef94(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  long lVar4;
  undefined7 extraout_var;
  ulong uVar5;
  ulong uVar6;
  undefined7 extraout_var_00;
  long lVar7;
  long lVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *(long *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  lVar8 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x78) = lVar8;
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar9,lVar8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x88) = CONCAT71(extraout_var,OVar3.value);
  lVar7 = *(long *)(CONCAT71(extraout_var,OVar3.value) + -8);
  *(long *)(unaff_x22 + 0x90) = lVar7;
  uVar6 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar5;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar6;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar6;
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 200) = uVar10;
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar11;
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar10;
  *(long *)(unaff_x22 + 0x18) = lVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar12;
  lVar4 = 0;
  FUN_100721af4();
  *(long *)(unaff_x22 + 0xe0) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar5;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar6;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar11,uVar10,puVar2,puVar1);
  *(long *)(unaff_x22 + 0x108) = lVar4;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar12,lVar4,puVar2,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x110) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x118) = lVar7;
  uVar6 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x128) = uVar6;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x130) = CONCAT71(extraout_var_00,OVar3.value);
  lVar7 = *(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8);
  *(long *)(unaff_x22 + 0x138) = lVar7;
  uVar6 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar6;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x150) = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar5;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar5;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x168) = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar6;
  lVar4 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x178) = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar6;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar11,uVar10,puVar2,puVar1);
  *(long *)(unaff_x22 + 0x188) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 400) = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x198) = uVar5;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(long *)(unaff_x22 + 0x40) = lVar8;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar12;
  lVar4 = 0;
  FUN_100721ae8();
  *(long *)(unaff_x22 + 0x1b0) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x1b8) = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c0) = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c8) = uVar6;
  _swift_task_switch(FUN_10071f2a0,0,0);
  return;
}



/* Address: 0x10071f2a0 | FUN_10071f2a0 */

void FUN_10071f2a0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long unaff_x22;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  (**(code **)(*(long *)(unaff_x22 + 0x1b8) + 0x10))(uVar25,*(undefined8 *)(unaff_x22 + 0x70),uVar1)
  ;
  _swift_getEnumCaseMultiPayload(uVar25,uVar1);
  iVar15 = (int)uVar25;
  if (iVar15 < 2) {
    if (iVar15 == 0) {
      lVar26 = *(long *)(unaff_x22 + 0x1c8);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x1a8);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
      lVar4 = *(long *)(unaff_x22 + 400);
      lVar2 = *(long *)(unaff_x22 + 0x178);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
      uVar25 = *(undefined8 *)(unaff_x22 + 200);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar30 = *(undefined8 *)(unaff_x22 + 0x78);
      lVar16 = 0;
      _swift_getTupleTypeMetadata2(0,uVar1,uVar30,0,0);
      iVar15 = *(int *)(lVar16 + 0x30);
      (**(code **)(lVar4 + 0x20))(uVar23,lVar26,uVar1);
      (**(code **)(lVar2 + 0x20))(uVar5,lVar26 + iVar15,uVar30);
      _swift_getAssociatedConformanceWitness
                (uVar18,uVar25,uVar1,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar17 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x1d0) = plVar17;
      *plVar17 = unaff_x22;
      plVar17[1] = (long)FUN_10071f708;
    }
    else {
      lVar27 = *(long *)(unaff_x22 + 0x1c8);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
      lVar4 = *(long *)(unaff_x22 + 400);
      lVar2 = *(long *)(unaff_x22 + 0x118);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
      lVar16 = *(long *)(unaff_x22 + 0xe8);
      uVar30 = *(undefined8 *)(unaff_x22 + 0xd8);
      lVar26 = 0;
      _swift_getTupleTypeMetadata3(0,uVar1,uVar23,uVar5,0,0);
      *(long *)(unaff_x22 + 0x1f0) = lVar26;
      iVar15 = *(int *)(lVar26 + 0x30);
      iVar14 = *(int *)(lVar26 + 0x40);
      pcVar19 = *(code **)(lVar4 + 0x20);
      *(code **)(unaff_x22 + 0x1f8) = pcVar19;
      (*pcVar19)(uVar24,lVar27,uVar1);
      pcVar19 = *(code **)(lVar2 + 0x20);
      *(code **)(unaff_x22 + 0x200) = pcVar19;
      (*pcVar19)(uVar18,lVar27 + iVar15,uVar23);
      pcVar19 = *(code **)(lVar16 + 0x20);
      *(code **)(unaff_x22 + 0x208) = pcVar19;
      (*pcVar19)(uVar21,lVar27 + iVar14,uVar5);
      _swift_getAssociatedConformanceWitness
                (uVar30,uVar25,uVar23,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar17 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x210) = plVar17;
      *plVar17 = unaff_x22;
      plVar17[1] = (long)FUN_10071fcd8;
    }
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  if (iVar15 == 2) {
    lVar27 = *(long *)(unaff_x22 + 0x1c8);
    lVar2 = *(long *)(unaff_x22 + 400);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x188);
    lVar4 = *(long *)(unaff_x22 + 0x150);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
    lVar16 = *(long *)(unaff_x22 + 0xe8);
    lVar26 = 0;
    _swift_getTupleTypeMetadata3(0,uVar23,uVar1,uVar30,0,0);
    *(long *)(unaff_x22 + 0x240) = lVar26;
    iVar15 = *(int *)(lVar26 + 0x30);
    iVar14 = *(int *)(lVar26 + 0x40);
    pcVar19 = *(code **)(lVar2 + 0x20);
    *(code **)(unaff_x22 + 0x248) = pcVar19;
    (*pcVar19)(uVar25,lVar27,uVar23);
    pcVar19 = *(code **)(lVar16 + 0x20);
    *(code **)(unaff_x22 + 0x250) = pcVar19;
    (*pcVar19)(uVar18,lVar27 + iVar15,uVar1);
    pcVar19 = *(code **)(lVar4 + 0x20);
    *(code **)(unaff_x22 + 600) = pcVar19;
    (*pcVar19)(uVar5,lVar27 + iVar14,uVar30);
    plVar17 = (long *)0xf0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x260) = plVar17;
    *plVar17 = unaff_x22;
    plVar17[1] = (long)FUN_1007205dc;
    FUN_10071e6a4(plVar17,*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0xf0),
                  *(undefined8 *)(unaff_x22 + 0xe0));
    return;
  }
  (**(code **)(*(long *)(unaff_x22 + 0xb0) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x60),1,1,*(undefined8 *)(unaff_x22 + 0x80));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar21 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar22 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar20);
                    /* WARNING: Could not recover jumptable at 0x00010071f704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10071f708 | FUN_10071f708 */

void FUN_10071f708(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1d8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1d0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10071f76c;
  }
  else {
    pcVar1 = FUN_100720c44;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10071f76c | FUN_10071f76c */

void FUN_10071f76c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long unaff_x22;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar19 = *(long *)(unaff_x22 + 0x150);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar18 = uVar1;
  (**(code **)(lVar19 + 0x30))(uVar1,1,uVar29);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar5 = *(long *)(unaff_x22 + 0x1b8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar6 = *(long *)(unaff_x22 + 400);
  lVar4 = *(long *)(unaff_x22 + 0x178);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
  if ((int)uVar18 == 1) {
    uVar18 = *(undefined8 *)(unaff_x22 + 0x130);
    lVar19 = *(long *)(unaff_x22 + 0x138);
    lVar30 = *(long *)(unaff_x22 + 0xb0);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x60);
    (**(code **)(lVar4 + 8))(uVar7,*(undefined8 *)(unaff_x22 + 0x78));
    (**(code **)(lVar6 + 8))(uVar22,uVar3);
    (**(code **)(lVar19 + 8))(uVar1,uVar18);
    (**(code **)(lVar5 + 8))(uVar26,uVar2);
    _swift_storeEnumTagMultiPayload(uVar26,uVar2,3);
    (**(code **)(lVar30 + 0x38))(uVar28,1,1,uVar29);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar29 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar23 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar28 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x98);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar29);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar21);
                    /* WARNING: Could not recover jumptable at 0x00010071f970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar18 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar15 = *(long *)(unaff_x22 + 0x118);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar30 = *(long *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(lVar19 + 0x20))(uVar28,uVar1,uVar29);
  (**(code **)(lVar19 + 0x10))(uVar18,uVar28,uVar29);
  Swift::AsyncSequence::_makeAsyncIterator();
  (**(code **)(lVar5 + 8))(lVar30,uVar2);
  lVar19 = 0;
  _swift_getTupleTypeMetadata3(0,uVar3,uVar26,uVar8,0,0);
  iVar16 = *(int *)(lVar19 + 0x30);
  iVar17 = *(int *)(lVar19 + 0x40);
  (**(code **)(lVar6 + 0x10))(lVar30,uVar22,uVar3);
  (**(code **)(lVar15 + 0x10))(lVar30 + iVar16,uVar24,uVar26);
  (**(code **)(lVar4 + 0x10))(lVar30 + iVar17,uVar7,uVar9);
  _swift_storeEnumTagMultiPayload(lVar30 + iVar17,uVar8,0);
  _swift_storeEnumTagMultiPayload(lVar30,uVar2,1);
  plVar20 = (long *)0x290;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1e0) = plVar20;
  *plVar20 = unaff_x22;
  plVar20[1] = (long)FUN_10071fac8;
  FUN_10071ef94(plVar20,*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x10071fac8 | FUN_10071fac8 */

void FUN_10071fac8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1e8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1e0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10071fb2c;
  }
  else {
    pcVar1 = FUN_100720df8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10071fb2c | FUN_10071fb2c */

void FUN_10071fb2c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar6 = *(long *)(unaff_x22 + 400);
  lVar2 = *(long *)(unaff_x22 + 0x178);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x170);
  lVar24 = *(long *)(unaff_x22 + 0x150);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))
            (*(undefined8 *)(unaff_x22 + 0x128),*(undefined8 *)(unaff_x22 + 0x110));
  (**(code **)(lVar24 + 8))(uVar19,uVar20);
  (**(code **)(lVar2 + 8))(uVar7,uVar22);
  (**(code **)(lVar6 + 8))(uVar18,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010071fcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10071fcd8 | FUN_10071fcd8 */

void FUN_10071fcd8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x218) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x210));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10071fd3c;
  }
  else {
    pcVar1 = FUN_100720fe0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10071fd3c | FUN_10071fd3c */

void FUN_10071fd3c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long *plVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long unaff_x22;
  long lVar27;
  undefined8 uVar28;
  code *pcVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar14 = uVar1;
  (**(code **)(lVar3 + 0x30))(uVar1,1,uVar25);
  if ((int)uVar14 == 1) {
    uVar26 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar14 = *(undefined8 *)(unaff_x22 + 200);
    uVar25 = *(undefined8 *)(unaff_x22 + 0xd0);
    (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x88));
    _swift_getAssociatedConformanceWitness
              (uVar25,uVar14,uVar26,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar15 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x220) = plVar15;
    *plVar15 = unaff_x22;
    plVar15[1] = (long)FUN_10072002c;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  pcVar16 = *(code **)(unaff_x22 + 0x208);
  pcVar2 = *(code **)(unaff_x22 + 0x1f8);
  pcVar4 = *(code **)(unaff_x22 + 0x200);
  lVar27 = *(long *)(unaff_x22 + 0x1f0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar5 = *(long *)(unaff_x22 + 0x1b8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar31 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar32 = *(long *)(unaff_x22 + 0x70);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x60);
  pcVar29 = *(code **)(lVar3 + 0x20);
  (*pcVar29)(uVar31,uVar1,uVar25);
  (**(code **)(lVar5 + 8))(lVar32,uVar14);
  iVar12 = *(int *)(lVar27 + 0x30);
  iVar13 = *(int *)(lVar27 + 0x40);
  (*pcVar2)(lVar32,uVar24,uVar26);
  (*pcVar4)(lVar32 + iVar12,uVar17,uVar18);
  (*pcVar16)(lVar32 + iVar13,uVar19,uVar20);
  _swift_storeEnumTagMultiPayload(lVar32,uVar14,1);
  (*pcVar29)(uVar21,uVar31,uVar25);
  (**(code **)(lVar3 + 0x38))(uVar21,0,1,uVar25);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
                    /* WARNING: Could not recover jumptable at 0x000100720028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10072002c | FUN_10072002c */

void FUN_10072002c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x228) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x220));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100720090;
  }
  else {
    pcVar1 = FUN_1007211ac;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100720090 | FUN_100720090 */

void FUN_100720090(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long unaff_x22;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  lVar24 = *(long *)(unaff_x22 + 0x150);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar13 = uVar28;
  (**(code **)(lVar24 + 0x30))(uVar28,1,uVar22);
  if ((int)uVar13 == 1) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1b0);
    lVar1 = *(long *)(unaff_x22 + 0x1b8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x188);
    lVar2 = *(long *)(unaff_x22 + 400);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x130);
    lVar3 = *(long *)(unaff_x22 + 0x138);
    lVar24 = *(long *)(unaff_x22 + 0x118);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x110);
    lVar17 = *(long *)(unaff_x22 + 0xb0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x60);
    (**(code **)(*(long *)(unaff_x22 + 0xe8) + 8))
              (*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0xe0));
    (**(code **)(lVar24 + 8))(uVar21,uVar26);
    (**(code **)(lVar2 + 8))(uVar23,uVar22);
    (**(code **)(lVar3 + 8))(uVar28,uVar16);
    (**(code **)(lVar1 + 8))(uVar29,uVar13);
    _swift_storeEnumTagMultiPayload(uVar29,uVar13,3);
    (**(code **)(lVar17 + 0x38))(uVar19,1,1,uVar18);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar19 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar20 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x98);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar29);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x0001007202b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar1 = *(long *)(unaff_x22 + 0x1b8);
  lVar2 = *(long *)(unaff_x22 + 0x1c0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar3 = *(long *)(unaff_x22 + 400);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(lVar24 + 0x20))(uVar19,uVar28,uVar22);
  lVar17 = 0;
  _swift_getTupleTypeMetadata3(0,uVar13,uVar23,uVar22,0,0);
  iVar11 = *(int *)(lVar17 + 0x30);
  iVar12 = *(int *)(lVar17 + 0x40);
  (**(code **)(lVar3 + 0x10))(lVar2,uVar18,uVar13);
  FUN_10071e488(lVar2 + iVar11,uVar23);
  (**(code **)(lVar24 + 0x10))(lVar2 + iVar12,uVar19,uVar22);
  _swift_storeEnumTagMultiPayload(lVar2,uVar21,2);
  (**(code **)(lVar1 + 0x28))(uVar16,lVar2,uVar21);
  plVar14 = (long *)0x290;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x230) = plVar14;
  *plVar14 = unaff_x22;
  plVar14[1] = (long)FUN_1007203d0;
  FUN_10071ef94(plVar14,*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x1007203d0 | FUN_1007203d0 */

void FUN_1007203d0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x238) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x230));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100720434;
  }
  else {
    pcVar1 = FUN_100721378;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100720434 | FUN_100720434 */

void FUN_100720434(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long unaff_x22;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar7 = *(long *)(unaff_x22 + 400);
  lVar2 = *(long *)(unaff_x22 + 0x118);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar10 = *(long *)(unaff_x22 + 0xe8);
  (**(code **)(*(long *)(unaff_x22 + 0x150) + 8))
            (*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x108));
  (**(code **)(lVar10 + 8))(uVar22,uVar3);
  (**(code **)(lVar2 + 8))(uVar8,uVar9);
  (**(code **)(lVar7 + 8))(uVar21,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar19);
                    /* WARNING: Could not recover jumptable at 0x0001007205d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007205dc | FUN_1007205dc */

void FUN_1007205dc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x268) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x260));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100720640;
  }
  else {
    pcVar1 = FUN_100721554;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100720640 | FUN_100720640 */

void FUN_100720640(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  code *pcVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  code *pcVar24;
  undefined8 uVar25;
  code *pcVar26;
  undefined8 uVar27;
  long lVar28;
  long unaff_x22;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  
  lVar28 = *(long *)(unaff_x22 + 0xb0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x80);
  (**(code **)(lVar1 + 0x10))
            (uVar13,*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x88));
  (**(code **)(lVar28 + 0x30))(uVar13,1,uVar27);
  pcVar16 = *(code **)(lVar1 + 8);
  *(code **)(unaff_x22 + 0x270) = pcVar16;
  if ((int)uVar13 == 1) {
    lVar1 = *(long *)(unaff_x22 + 0x1b8);
    lVar33 = *(long *)(unaff_x22 + 0x1c0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1b0);
    lVar28 = *(long *)(unaff_x22 + 400);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x168);
    lVar21 = *(long *)(unaff_x22 + 0x150);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
    lVar31 = *(long *)(unaff_x22 + 0xe8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x70);
    (*pcVar16)(*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x88));
    lVar14 = 0;
    _swift_getTupleTypeMetadata3(0,uVar29,uVar3,uVar5,0,0);
    iVar11 = *(int *)(lVar14 + 0x40);
    (**(code **)(lVar28 + 0x10))(lVar33,uVar27,uVar29);
    (**(code **)(lVar21 + 0x10))(uVar30,uVar2,uVar13);
    Swift::AsyncSequence::_makeAsyncIterator();
    (**(code **)(lVar31 + 0x10))(lVar33 + iVar11,uVar4,uVar5);
    _swift_storeEnumTagMultiPayload(lVar33,uVar18,1);
    (**(code **)(lVar1 + 0x28))(uVar19,lVar33,uVar18);
    plVar15 = (long *)0x290;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x278) = plVar15;
    *plVar15 = unaff_x22;
    plVar15[1] = (long)FUN_100720a20;
    FUN_10071ef94(plVar15,*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68));
    return;
  }
  pcVar20 = *(code **)(unaff_x22 + 600);
  pcVar24 = *(code **)(unaff_x22 + 0x250);
  pcVar26 = *(code **)(unaff_x22 + 0x248);
  lVar33 = *(long *)(unaff_x22 + 0x240);
  lVar21 = *(long *)(unaff_x22 + 0x1b8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar28 = *(long *)(unaff_x22 + 0xe8);
  lVar1 = *(long *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar31 = *(long *)(unaff_x22 + 0x70);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x60);
  (*pcVar16)(*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x88));
  (**(code **)(lVar28 + 8))(uVar4,uVar27);
  pcVar16 = *(code **)(lVar1 + 0x20);
  (*pcVar16)(uVar5,uVar2,uVar3);
  (**(code **)(lVar21 + 8))(lVar31,uVar18);
  iVar11 = *(int *)(lVar33 + 0x30);
  iVar12 = *(int *)(lVar33 + 0x40);
  (*pcVar26)(lVar31,uVar19,uVar29);
  (*pcVar24)(lVar31 + iVar11,uVar13,uVar27);
  (*pcVar20)(lVar31 + iVar12,uVar30,uVar25);
  _swift_storeEnumTagMultiPayload(lVar31,uVar18,2);
  (*pcVar16)(uVar22,uVar5,uVar3);
  (**(code **)(lVar1 + 0x38))(uVar22,0,1,uVar3);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar29 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar17);
                    /* WARNING: Could not recover jumptable at 0x000100720a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100720a20 | FUN_100720a20 */

void FUN_100720a20(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x280) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x278));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100720a84;
  }
  else {
    pcVar1 = FUN_100721720;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100720a84 | FUN_100720a84 */

void FUN_100720a84(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  code *pcVar25;
  
  pcVar25 = *(code **)(unaff_x22 + 0x270);
  lVar1 = *(long *)(unaff_x22 + 400);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar2 = *(long *)(unaff_x22 + 0x150);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x88);
  pcVar19 = *(code **)(*(long *)(unaff_x22 + 0xe8) + 8);
  (*pcVar19)(*(undefined8 *)(unaff_x22 + 0xf0),uVar3);
  (*pcVar25)(uVar23,uVar24);
  (**(code **)(lVar2 + 8))(uVar6,uVar20);
  (*pcVar19)(uVar7,uVar3);
  (**(code **)(lVar1 + 8))(uVar5,uVar16);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar17);
                    /* WARNING: Could not recover jumptable at 0x000100720c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100720c44 | FUN_100720c44 */

void FUN_100720c44(void)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long unaff_x22;
  long lVar26;
  
  lVar26 = *(long *)(unaff_x22 + 400);
  (**(code **)(*(long *)(unaff_x22 + 0x178) + 8))
            (*(undefined8 *)(unaff_x22 + 0x180),*(undefined8 *)(unaff_x22 + 0x78));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar13 = *(long *)(unaff_x22 + 0x1b8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar24 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(lVar26 + 8))(uVar14,*(undefined8 *)(unaff_x22 + 0x188));
  (**(code **)(lVar13 + 8))(uVar25,uVar2);
  _swift_storeEnumTagMultiPayload(uVar25,uVar2,3);
  _swift_willThrow();
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar22);
                    /* WARNING: Could not recover jumptable at 0x000100720df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100720df8 | FUN_100720df8 */

void FUN_100720df8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long unaff_x22;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  
  lVar26 = *(long *)(unaff_x22 + 400);
  lVar1 = *(long *)(unaff_x22 + 0x178);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x170);
  lVar27 = *(long *)(unaff_x22 + 0x150);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))
            (*(undefined8 *)(unaff_x22 + 0x128),*(undefined8 *)(unaff_x22 + 0x110));
  (**(code **)(lVar27 + 8))(uVar22,uVar24);
  (**(code **)(lVar1 + 8))(uVar9,uVar25);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar1 = *(long *)(unaff_x22 + 0x1b8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar21 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(lVar26 + 8))(uVar11,*(undefined8 *)(unaff_x22 + 0x188));
  (**(code **)(lVar1 + 8))(uVar23,uVar22);
  _swift_storeEnumTagMultiPayload(uVar23,uVar22,3);
  _swift_willThrow();
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar19);
                    /* WARNING: Could not recover jumptable at 0x000100720fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100720fe0 | FUN_100720fe0 */

void FUN_100720fe0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long unaff_x22;
  long lVar26;
  
  lVar26 = *(long *)(unaff_x22 + 400);
  lVar1 = *(long *)(unaff_x22 + 0x118);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x110);
  (**(code **)(*(long *)(unaff_x22 + 0xe8) + 8))
            (*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0xe0));
  (**(code **)(lVar1 + 8))(uVar11,uVar24);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar1 = *(long *)(unaff_x22 + 0x1b8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(lVar26 + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x188));
  (**(code **)(lVar1 + 8))(uVar25,uVar24);
  _swift_storeEnumTagMultiPayload(uVar25,uVar24,3);
  _swift_willThrow();
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar21);
                    /* WARNING: Could not recover jumptable at 0x0001007211a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007211ac | FUN_1007211ac */

void FUN_1007211ac(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long unaff_x22;
  long lVar26;
  
  lVar26 = *(long *)(unaff_x22 + 400);
  lVar1 = *(long *)(unaff_x22 + 0x118);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x110);
  (**(code **)(*(long *)(unaff_x22 + 0xe8) + 8))
            (*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0xe0));
  (**(code **)(lVar1 + 8))(uVar11,uVar24);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar1 = *(long *)(unaff_x22 + 0x1b8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(lVar26 + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x188));
  (**(code **)(lVar1 + 8))(uVar25,uVar24);
  _swift_storeEnumTagMultiPayload(uVar25,uVar24,3);
  _swift_willThrow();
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar21);
                    /* WARNING: Could not recover jumptable at 0x000100721374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100721378 | FUN_100721378 */

void FUN_100721378(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x118);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar12 = *(long *)(unaff_x22 + 0xe8);
  (**(code **)(*(long *)(unaff_x22 + 0x150) + 8))
            (*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x108));
  (**(code **)(lVar12 + 8))(uVar26,uVar2);
  (**(code **)(lVar1 + 8))(uVar10,uVar11);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar1 = *(long *)(unaff_x22 + 0x1b8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar24 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(*(long *)(unaff_x22 + 400) + 8))(uVar11,*(undefined8 *)(unaff_x22 + 0x188));
  (**(code **)(lVar1 + 8))(uVar25,uVar10);
  _swift_storeEnumTagMultiPayload(uVar25,uVar10,3);
  _swift_willThrow();
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar23);
                    /* WARNING: Could not recover jumptable at 0x000100721550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100721554 | FUN_100721554 */

void FUN_100721554(void)

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
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long unaff_x22;
  long lVar25;
  undefined8 uVar26;
  
  lVar25 = *(long *)(unaff_x22 + 400);
  uVar24 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar11 = *(long *)(unaff_x22 + 0xe8);
  (**(code **)(*(long *)(unaff_x22 + 0x150) + 8))
            (*(undefined8 *)(unaff_x22 + 0x158),*(undefined8 *)(unaff_x22 + 0x108));
  (**(code **)(lVar11 + 8))(uVar24,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar11 = *(long *)(unaff_x22 + 0x1b8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar22 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(lVar25 + 8))(uVar26,*(undefined8 *)(unaff_x22 + 0x188));
  (**(code **)(lVar11 + 8))(uVar23,uVar24);
  _swift_storeEnumTagMultiPayload(uVar23,uVar24,3);
  _swift_willThrow();
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar21);
                    /* WARNING: Could not recover jumptable at 0x00010072171c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100721720 | FUN_100721720 */

void FUN_100721720(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long unaff_x22;
  undefined8 uVar24;
  undefined8 uVar25;
  code *pcVar26;
  code *pcVar27;
  
  pcVar26 = *(code **)(unaff_x22 + 0x270);
  lVar1 = *(long *)(unaff_x22 + 0x150);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x88);
  pcVar27 = *(code **)(*(long *)(unaff_x22 + 0xe8) + 8);
  (*pcVar27)(*(undefined8 *)(unaff_x22 + 0xf0),uVar2);
  (*pcVar26)(uVar24,uVar25);
  (**(code **)(lVar1 + 8))(uVar8,uVar22);
  (*pcVar27)(uVar9,uVar2);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar1 = *(long *)(unaff_x22 + 0x1b8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar21 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(*(long *)(unaff_x22 + 400) + 8))(uVar10,*(undefined8 *)(unaff_x22 + 0x188));
  (**(code **)(lVar1 + 8))(uVar23,uVar8);
  _swift_storeEnumTagMultiPayload(uVar23,uVar8,3);
  _swift_willThrow();
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar20);
                    /* WARNING: Could not recover jumptable at 0x00010072190c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100721910 | FUN_100721910 */

void FUN_100721910(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x290;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_10071ef94(plVar1,param_1,param_2);
  return;
}



/* Address: 0x100721978 | FUN_100721978 */

void FUN_100721978(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100721990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x18) + -8) + 0x10))
            (param_1,unaff_x20 + *(int *)(param_2 + 0x3c));
  return;
}



/* Address: 0x100721994 | FUN_100721994 */

void FUN_100721994(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  lVar8 = *(long *)(lVar2 + -8);
  puVar6 = auStack_70 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(lVar1 + -8);
  lVar4 = (long)puVar6 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = 0;
  local_68 = param_1;
  _swift_getAssociatedTypeWitness
            (0,uVar7,lVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar3 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  (**(code **)(lVar5 + 0x10))(lVar4);
  Swift::AsyncSequence::_makeAsyncIterator();
  (**(code **)(lVar8 + 0x10))(puVar6,unaff_x20 + *(int *)(param_2 + 0x3c),lVar2);
  FUN_10071eea0(local_68,lVar4 - (lVar3 + 0xfU & 0xfffffffffffffff0),puVar6,lVar1,lVar2,uVar7,
                *(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30));
  return;
}



/* Address: 0x100721ab8 | FUN_100721ab8 */

void FUN_100721ab8(long param_1)

{
  FUN_100721994();
                    /* WARNING: Could not recover jumptable at 0x000100721ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x100721ae8 | FUN_100721ae8 */

void FUN_100721ae8(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbd7b0);
  return;
}



/* Address: 0x100721af4 | FUN_100721af4 */

void FUN_100721af4(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbd810);
  return;
}



/* Address: 0x100721b00 | FUN_100721b00 */

void FUN_100721b00(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c74d80,param_1);
  return;
}



/* Address: 0x100721b10 | FUN_100721b10 */

void FUN_100721b10(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar1 = 0x13f;
    _swift_checkMetadataState();
    if (uVar2 < 0x40) {
      local_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x38);
    }
  }
  return;
}



/* Address: 0x100721b9c | FUN_100721b9c */

void FUN_100721b9c(long param_1)

{
  long lVar1;
  long *plVar2;
  long local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  plVar2 = &local_50;
  local_30 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  local_50 = *(long *)(param_1 + 0x10);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = 0x13f;
  FUN_100721ae8();
  if (plVar2 < (undefined1 *)0x40) {
    local_50 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_50,param_1 + 0x38);
  }
  return;
}



/* Address: 0x100721c18 | FUN_100721c18 */

void FUN_100721c18(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbd750);
  return;
}



/* Address: 0x100721c24 | FUN_100721c24 */

void FUN_100721c24(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_100 [32];
  undefined8 local_e0;
  long lStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  
  uVar9 = *(ulong *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = 0x13f;
  uVar6 = uVar9;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar9,uVar10,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (uVar6 < 0x40) {
    lVar12 = *(long *)(lVar2 + -8);
    uVar6 = *(ulong *)(param_1 + 0x18);
    lVar2 = 0x13f;
    _swift_checkMetadataState();
    if (uVar6 < 0x40) {
      _swift_getTupleTypeLayout2(auStack_98,lVar12 + 0x40,*(long *)(lVar2 + -8) + 0x40);
      puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
      uVar11 = *(ulong *)(param_1 + 0x30);
      lVar3 = 0xff;
      uVar6 = uVar9;
      local_78 = auStack_98;
      _swift_getAssociatedTypeWitness
                (0xff,uVar9,uVar10,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      lVar4 = 0x13f;
      uVar7 = uVar11;
      _swift_getAssociatedTypeWitness
                (0x13f,uVar11,lVar3,puVar1,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
      if (uVar7 < 0x40) {
        uStack_c8 = *(undefined8 *)(param_1 + 0x28);
        puVar8 = &local_e0;
        lVar5 = 0x13f;
        local_e0 = uVar10;
        lStack_d8 = lVar2;
        local_d0 = uVar9;
        local_c0 = uVar11;
        FUN_100721af4();
        if (puVar8 < (undefined8 *)0x40) {
          lVar2 = *(long *)(lVar5 + -8);
          _swift_getTupleTypeLayout3
                    (auStack_b8,lVar12 + 0x40,*(long *)(lVar4 + -8) + 0x40,lVar2 + 0x40);
          if (uVar6 < 0x40) {
            local_70 = auStack_b8;
            _swift_getTupleTypeLayout3
                      (auStack_100,lVar12 + 0x40,lVar2 + 0x40,*(long *)(lVar3 + -8) + 0x40);
            local_68 = auStack_100;
            _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_78);
          }
        }
      }
    }
  }
  return;
}



/* Address: 0x100721dc8 | thunk_FUN_100721dcc */

long * thunk_FUN_100721dcc(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  uint *puVar28;
  uint uVar29;
  undefined8 uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 uVar34;
  long lVar35;
  undefined8 uVar36;
  ulong uVar37;
  
  puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar7 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  uVar30 = *(undefined8 *)(param_3 + 0x20);
  uVar34 = *(undefined8 *)(param_3 + 0x10);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar30,uVar34,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar15 = *(long *)(lVar9 + -8);
  lVar23 = *(long *)(lVar15 + 0x40);
  lVar22 = *(long *)(param_3 + 0x18);
  lVar19 = *(long *)(lVar22 + -8);
  uVar17 = *(uint *)(lVar19 + 0x50);
  uVar32 = (ulong)uVar17 & 0xff;
  uVar27 = lVar23 + uVar32;
  uVar26 = *(ulong *)(lVar19 + 0x40);
  uVar31 = (uVar27 & (uVar32 ^ 0xffffffffffffffff)) + uVar26;
  uVar36 = *(undefined8 *)(param_3 + 0x30);
  uVar10 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar30,uVar34,puVar8,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness(0,uVar36,uVar10,puVar8,puVar7);
  lVar16 = *(long *)(lVar11 + -8);
  uVar29 = *(uint *)(lVar16 + 0x50);
  uVar21 = (ulong)uVar29 & 0xff;
  uVar3 = lVar23 + uVar21;
  lVar24 = *(long *)(lVar16 + 0x40);
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar22,puVar8,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar20 = *(long *)(lVar12 + -8);
  uVar18 = *(uint *)(lVar20 + 0x50);
  uVar6 = (uint)uVar32 | uVar18 & 0xf8 | 7;
  uVar33 = (ulong)uVar6;
  uVar1 = *(long *)(lVar20 + 0x40) + 7;
  uVar2 = (uVar1 & 0xfffffffffffffff8) + 8;
  if (uVar2 <= uVar26) {
    uVar2 = uVar26;
  }
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  uVar26 = uVar2 + 1 +
           (lVar24 + (uVar3 & (uVar21 ^ 0xffffffffffffffff)) + uVar33 &
           (uVar33 ^ 0xffffffffffffffff));
  if (uVar26 <= uVar31) {
    uVar26 = uVar31;
  }
  uVar31 = lVar23 + uVar33;
  lVar13 = 0;
  _swift_checkMetadataState(0,uVar10);
  lVar35 = *(long *)(lVar13 + -8);
  uVar37 = (ulong)*(uint *)(lVar35 + 0x50) & 0xff;
  lVar23 = uVar2 + 1 + uVar37;
  uVar4 = (lVar23 + (uVar31 & (uVar33 ^ 0xffffffffffffffff)) & (uVar37 ^ 0xffffffffffffffff)) +
          *(long *)(lVar35 + 0x40);
  if (uVar4 <= uVar26) {
    uVar4 = uVar26;
  }
  uVar29 = *(uint *)(lVar15 + 0x50) | uVar29;
  uVar6 = uVar6 | uVar29 & 0xf8 | (uint)uVar37;
  if ((uVar6 != 7 || ((uVar29 | uVar17 | uVar18 | *(uint *)(lVar35 + 0x50)) & 0x100000) != 0) ||
      0x18 < uVar4 + 1) {
    lVar9 = *(long *)param_2;
    *param_1 = lVar9;
    _swift_retain();
    return (long *)(lVar9 + ((ulong)uVar6 + 0x10 & ((ulong)uVar6 ^ 0xffffffffffffffff)));
  }
  bVar5 = *(byte *)((long)param_2 + uVar4);
  uVar17 = (uint)bVar5;
  if (2 < bVar5) {
    uVar18 = (uint)uVar4;
    uVar29 = 4;
    if (uVar18 < 4) {
      uVar29 = uVar18;
    }
    if ((int)uVar29 < 2) {
      if (uVar29 == 0) goto LAB_100722094;
      uVar17 = (uint)(byte)*param_2;
    }
    else if (uVar29 == 2) {
      uVar17 = (uint)(ushort)*param_2;
    }
    else if (uVar29 == 3) {
      uVar17 = (uint)(uint3)*param_2;
    }
    else {
      uVar17 = *param_2;
    }
    if (uVar18 < 4) {
      uVar17 = (uVar17 | bVar5 - 3 << (ulong)((uVar18 & 3) << 3)) + 3;
    }
    else {
      uVar17 = uVar17 + 3;
    }
  }
LAB_100722094:
  uVar26 = ~uVar33;
  uVar29 = (uint)uVar2;
  if (uVar17 != 2) {
    if (uVar17 != 1) {
      if (uVar17 == 0) {
        (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar9);
        (**(code **)(lVar19 + 0x10))
                  (uVar27 + (long)param_1 & ~uVar32,(ulong)(uVar27 + (long)param_2) & ~uVar32,lVar22
                  );
        *(undefined1 *)((long)param_1 + uVar4) = 0;
        return param_1;
      }
      plVar14 = _memcpy(param_1,param_2,uVar4 + 1);
      return plVar14;
    }
    (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar9);
    uVar27 = uVar3 + (long)param_1 & ~uVar21;
    uVar31 = (ulong)(uVar3 + (long)param_2) & ~uVar21;
    (**(code **)(lVar16 + 0x10))(uVar27,uVar31,lVar11);
    puVar25 = (undefined8 *)(uVar27 + lVar24 + uVar33 & uVar26);
    puVar28 = (uint *)(uVar31 + lVar24 + uVar33 & uVar26);
    bVar5 = *(byte *)((long)puVar28 + uVar2);
    uVar17 = (uint)bVar5;
    if (3 < bVar5) {
      uVar18 = 4;
      if (uVar29 < 4) {
        uVar18 = uVar29;
      }
      if ((int)uVar18 < 2) {
        if (uVar18 == 0) goto LAB_100722284;
        uVar18 = (uint)(byte)*puVar28;
      }
      else if (uVar18 == 2) {
        uVar18 = (uint)(ushort)*puVar28;
      }
      else if (uVar18 == 3) {
        uVar18 = (uint)(uint3)*puVar28;
      }
      else {
        uVar18 = *puVar28;
      }
      uVar17 = uVar18 | bVar5 - 4 << (ulong)((uVar29 & 3) << 3);
      if (3 < uVar29) {
        uVar17 = uVar18;
      }
      uVar17 = uVar17 + 4;
    }
LAB_100722284:
    if ((int)uVar17 < 2) {
      if (uVar17 == 0) {
        (**(code **)(lVar19 + 0x10))(puVar25,puVar28,lVar22);
        *(undefined1 *)((long)puVar25 + uVar2) = 0;
        goto LAB_100722334;
      }
      (**(code **)(lVar20 + 0x10))(puVar25,puVar28,lVar12);
      uVar10 = *(undefined8 *)((ulong)(uVar1 + (long)puVar28) & 0xfffffffffffffff8);
      *(undefined8 *)(uVar1 + (long)puVar25 & 0xfffffffffffffff8) = uVar10;
      *(undefined1 *)((long)puVar25 + uVar2) = 1;
    }
    else if (uVar17 == 2) {
      uVar10 = *(undefined8 *)puVar28;
      *puVar25 = uVar10;
      *(undefined1 *)((long)puVar25 + uVar2) = 2;
    }
    else {
      *puVar25 = *(undefined8 *)puVar28;
      puVar25[1] = *(undefined8 *)(puVar28 + 2);
      uVar10 = *(undefined8 *)(puVar28 + 4);
      puVar25[2] = uVar10;
      *(undefined1 *)((long)puVar25 + uVar2) = 3;
      _swift_retain();
    }
    _swift_retain(uVar10);
LAB_100722334:
    *(undefined1 *)((long)param_1 + uVar4) = 1;
    return param_1;
  }
  (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar9);
  puVar25 = (undefined8 *)(uVar31 + (long)param_1 & uVar26);
  puVar28 = (uint *)((ulong)(uVar31 + (long)param_2) & uVar26);
  bVar5 = *(byte *)((long)puVar28 + uVar2);
  uVar17 = (uint)bVar5;
  if (3 < bVar5) {
    uVar18 = 4;
    if (uVar29 < 4) {
      uVar18 = uVar29;
    }
    if ((int)uVar18 < 2) {
      if (uVar18 == 0) goto LAB_100722360;
      uVar18 = (uint)(byte)*puVar28;
    }
    else if (uVar18 == 2) {
      uVar18 = (uint)(ushort)*puVar28;
    }
    else if (uVar18 == 3) {
      uVar18 = (uint)(uint3)*puVar28;
    }
    else {
      uVar18 = *puVar28;
    }
    uVar17 = uVar18 | bVar5 - 4 << (ulong)((uVar29 & 3) << 3);
    if (3 < uVar29) {
      uVar17 = uVar18;
    }
    uVar17 = uVar17 + 4;
  }
LAB_100722360:
  if ((int)uVar17 < 2) {
    if (uVar17 == 0) {
      (**(code **)(lVar19 + 0x10))(puVar25,puVar28,lVar22);
      *(undefined1 *)((long)puVar25 + uVar2) = 0;
      goto LAB_100722414;
    }
    (**(code **)(lVar20 + 0x10))(puVar25,puVar28,lVar12);
    uVar10 = *(undefined8 *)((ulong)(uVar1 + (long)puVar28) & 0xfffffffffffffff8);
    *(undefined8 *)(uVar1 + (long)puVar25 & 0xfffffffffffffff8) = uVar10;
    *(undefined1 *)((long)puVar25 + uVar2) = 1;
  }
  else if (uVar17 == 2) {
    uVar10 = *(undefined8 *)puVar28;
    *puVar25 = uVar10;
    *(undefined1 *)((long)puVar25 + uVar2) = 2;
  }
  else {
    *puVar25 = *(undefined8 *)puVar28;
    puVar25[1] = *(undefined8 *)(puVar28 + 2);
    uVar10 = *(undefined8 *)(puVar28 + 4);
    puVar25[2] = uVar10;
    *(undefined1 *)((long)puVar25 + uVar2) = 3;
    _swift_retain();
  }
  _swift_retain(uVar10);
LAB_100722414:
  (**(code **)(lVar35 + 0x10))
            (lVar23 + (long)puVar25 & ~uVar37,(ulong)(lVar23 + (long)puVar28) & ~uVar37,lVar13);
  *(undefined1 *)((long)param_1 + uVar4) = 2;
  return param_1;
}



/* Address: 0x100721dcc | FUN_100721dcc */

long * FUN_100721dcc(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  uint *puVar28;
  uint uVar29;
  undefined8 uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 uVar34;
  long lVar35;
  undefined8 uVar36;
  ulong uVar37;
  
  puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar7 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  uVar30 = *(undefined8 *)(param_3 + 0x20);
  uVar34 = *(undefined8 *)(param_3 + 0x10);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar30,uVar34,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar15 = *(long *)(lVar9 + -8);
  lVar23 = *(long *)(lVar15 + 0x40);
  lVar22 = *(long *)(param_3 + 0x18);
  lVar19 = *(long *)(lVar22 + -8);
  uVar17 = *(uint *)(lVar19 + 0x50);
  uVar32 = (ulong)uVar17 & 0xff;
  uVar27 = lVar23 + uVar32;
  uVar26 = *(ulong *)(lVar19 + 0x40);
  uVar31 = (uVar27 & (uVar32 ^ 0xffffffffffffffff)) + uVar26;
  uVar36 = *(undefined8 *)(param_3 + 0x30);
  uVar10 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar30,uVar34,puVar8,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness(0,uVar36,uVar10,puVar8,puVar7);
  lVar16 = *(long *)(lVar11 + -8);
  uVar29 = *(uint *)(lVar16 + 0x50);
  uVar21 = (ulong)uVar29 & 0xff;
  uVar3 = lVar23 + uVar21;
  lVar24 = *(long *)(lVar16 + 0x40);
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar22,puVar8,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar20 = *(long *)(lVar12 + -8);
  uVar18 = *(uint *)(lVar20 + 0x50);
  uVar6 = (uint)uVar32 | uVar18 & 0xf8 | 7;
  uVar33 = (ulong)uVar6;
  uVar1 = *(long *)(lVar20 + 0x40) + 7;
  uVar2 = (uVar1 & 0xfffffffffffffff8) + 8;
  if (uVar2 <= uVar26) {
    uVar2 = uVar26;
  }
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  uVar26 = uVar2 + 1 +
           (lVar24 + (uVar3 & (uVar21 ^ 0xffffffffffffffff)) + uVar33 &
           (uVar33 ^ 0xffffffffffffffff));
  if (uVar26 <= uVar31) {
    uVar26 = uVar31;
  }
  uVar31 = lVar23 + uVar33;
  lVar13 = 0;
  _swift_checkMetadataState(0,uVar10);
  lVar35 = *(long *)(lVar13 + -8);
  uVar37 = (ulong)*(uint *)(lVar35 + 0x50) & 0xff;
  lVar23 = uVar2 + 1 + uVar37;
  uVar4 = (lVar23 + (uVar31 & (uVar33 ^ 0xffffffffffffffff)) & (uVar37 ^ 0xffffffffffffffff)) +
          *(long *)(lVar35 + 0x40);
  if (uVar4 <= uVar26) {
    uVar4 = uVar26;
  }
  uVar29 = *(uint *)(lVar15 + 0x50) | uVar29;
  uVar6 = uVar6 | uVar29 & 0xf8 | (uint)uVar37;
  if ((uVar6 != 7 || ((uVar29 | uVar17 | uVar18 | *(uint *)(lVar35 + 0x50)) & 0x100000) != 0) ||
      0x18 < uVar4 + 1) {
    lVar9 = *(long *)param_2;
    *param_1 = lVar9;
    _swift_retain();
    return (long *)(lVar9 + ((ulong)uVar6 + 0x10 & ((ulong)uVar6 ^ 0xffffffffffffffff)));
  }
  bVar5 = *(byte *)((long)param_2 + uVar4);
  uVar17 = (uint)bVar5;
  if (2 < bVar5) {
    uVar18 = (uint)uVar4;
    uVar29 = 4;
    if (uVar18 < 4) {
      uVar29 = uVar18;
    }
    if ((int)uVar29 < 2) {
      if (uVar29 == 0) goto LAB_100722094;
      uVar17 = (uint)(byte)*param_2;
    }
    else if (uVar29 == 2) {
      uVar17 = (uint)(ushort)*param_2;
    }
    else if (uVar29 == 3) {
      uVar17 = (uint)(uint3)*param_2;
    }
    else {
      uVar17 = *param_2;
    }
    if (uVar18 < 4) {
      uVar17 = (uVar17 | bVar5 - 3 << (ulong)((uVar18 & 3) << 3)) + 3;
    }
    else {
      uVar17 = uVar17 + 3;
    }
  }
LAB_100722094:
  uVar26 = ~uVar33;
  uVar29 = (uint)uVar2;
  if (uVar17 != 2) {
    if (uVar17 != 1) {
      if (uVar17 == 0) {
        (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar9);
        (**(code **)(lVar19 + 0x10))
                  (uVar27 + (long)param_1 & ~uVar32,(ulong)(uVar27 + (long)param_2) & ~uVar32,lVar22
                  );
        *(undefined1 *)((long)param_1 + uVar4) = 0;
        return param_1;
      }
      plVar14 = _memcpy(param_1,param_2,uVar4 + 1);
      return plVar14;
    }
    (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar9);
    uVar27 = uVar3 + (long)param_1 & ~uVar21;
    uVar31 = (ulong)(uVar3 + (long)param_2) & ~uVar21;
    (**(code **)(lVar16 + 0x10))(uVar27,uVar31,lVar11);
    puVar25 = (undefined8 *)(uVar27 + lVar24 + uVar33 & uVar26);
    puVar28 = (uint *)(uVar31 + lVar24 + uVar33 & uVar26);
    bVar5 = *(byte *)((long)puVar28 + uVar2);
    uVar17 = (uint)bVar5;
    if (3 < bVar5) {
      uVar18 = 4;
      if (uVar29 < 4) {
        uVar18 = uVar29;
      }
      if ((int)uVar18 < 2) {
        if (uVar18 == 0) goto LAB_100722284;
        uVar18 = (uint)(byte)*puVar28;
      }
      else if (uVar18 == 2) {
        uVar18 = (uint)(ushort)*puVar28;
      }
      else if (uVar18 == 3) {
        uVar18 = (uint)(uint3)*puVar28;
      }
      else {
        uVar18 = *puVar28;
      }
      uVar17 = uVar18 | bVar5 - 4 << (ulong)((uVar29 & 3) << 3);
      if (3 < uVar29) {
        uVar17 = uVar18;
      }
      uVar17 = uVar17 + 4;
    }
LAB_100722284:
    if ((int)uVar17 < 2) {
      if (uVar17 == 0) {
        (**(code **)(lVar19 + 0x10))(puVar25,puVar28,lVar22);
        *(undefined1 *)((long)puVar25 + uVar2) = 0;
        goto LAB_100722334;
      }
      (**(code **)(lVar20 + 0x10))(puVar25,puVar28,lVar12);
      uVar10 = *(undefined8 *)((ulong)(uVar1 + (long)puVar28) & 0xfffffffffffffff8);
      *(undefined8 *)(uVar1 + (long)puVar25 & 0xfffffffffffffff8) = uVar10;
      *(undefined1 *)((long)puVar25 + uVar2) = 1;
    }
    else if (uVar17 == 2) {
      uVar10 = *(undefined8 *)puVar28;
      *puVar25 = uVar10;
      *(undefined1 *)((long)puVar25 + uVar2) = 2;
    }
    else {
      *puVar25 = *(undefined8 *)puVar28;
      puVar25[1] = *(undefined8 *)(puVar28 + 2);
      uVar10 = *(undefined8 *)(puVar28 + 4);
      puVar25[2] = uVar10;
      *(undefined1 *)((long)puVar25 + uVar2) = 3;
      _swift_retain();
    }
    _swift_retain(uVar10);
LAB_100722334:
    *(undefined1 *)((long)param_1 + uVar4) = 1;
    return param_1;
  }
  (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar9);
  puVar25 = (undefined8 *)(uVar31 + (long)param_1 & uVar26);
  puVar28 = (uint *)((ulong)(uVar31 + (long)param_2) & uVar26);
  bVar5 = *(byte *)((long)puVar28 + uVar2);
  uVar17 = (uint)bVar5;
  if (3 < bVar5) {
    uVar18 = 4;
    if (uVar29 < 4) {
      uVar18 = uVar29;
    }
    if ((int)uVar18 < 2) {
      if (uVar18 == 0) goto LAB_100722360;
      uVar18 = (uint)(byte)*puVar28;
    }
    else if (uVar18 == 2) {
      uVar18 = (uint)(ushort)*puVar28;
    }
    else if (uVar18 == 3) {
      uVar18 = (uint)(uint3)*puVar28;
    }
    else {
      uVar18 = *puVar28;
    }
    uVar17 = uVar18 | bVar5 - 4 << (ulong)((uVar29 & 3) << 3);
    if (3 < uVar29) {
      uVar17 = uVar18;
    }
    uVar17 = uVar17 + 4;
  }
LAB_100722360:
  if ((int)uVar17 < 2) {
    if (uVar17 == 0) {
      (**(code **)(lVar19 + 0x10))(puVar25,puVar28,lVar22);
      *(undefined1 *)((long)puVar25 + uVar2) = 0;
      goto LAB_100722414;
    }
    (**(code **)(lVar20 + 0x10))(puVar25,puVar28,lVar12);
    uVar10 = *(undefined8 *)((ulong)(uVar1 + (long)puVar28) & 0xfffffffffffffff8);
    *(undefined8 *)(uVar1 + (long)puVar25 & 0xfffffffffffffff8) = uVar10;
    *(undefined1 *)((long)puVar25 + uVar2) = 1;
  }
  else if (uVar17 == 2) {
    uVar10 = *(undefined8 *)puVar28;
    *puVar25 = uVar10;
    *(undefined1 *)((long)puVar25 + uVar2) = 2;
  }
  else {
    *puVar25 = *(undefined8 *)puVar28;
    puVar25[1] = *(undefined8 *)(puVar28 + 2);
    uVar10 = *(undefined8 *)(puVar28 + 4);
    puVar25[2] = uVar10;
    *(undefined1 *)((long)puVar25 + uVar2) = 3;
    _swift_retain();
  }
  _swift_retain(uVar10);
LAB_100722414:
  (**(code **)(lVar35 + 0x10))
            (lVar23 + (long)puVar25 & ~uVar37,(ulong)(lVar23 + (long)puVar28) & ~uVar37,lVar13);
  *(undefined1 *)((long)param_1 + uVar4) = 2;
  return param_1;
}



/* Address: 0x100722444 | thunk_FUN_100722448 */

void thunk_FUN_100722448(uint *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  code *UNRECOVERED_JUMPTABLE;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 uVar30;
  uint uVar31;
  long lVar32;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar23 = *(undefined8 *)(param_2 + 0x20);
  uVar25 = *(undefined8 *)(param_2 + 0x10);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar23,uVar25,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar13 = *(long *)(lVar7 + -8);
  lVar20 = *(long *)(lVar13 + 0x40);
  lVar32 = *(long *)(param_2 + 0x18);
  lVar16 = *(long *)(lVar32 + -8);
  bVar4 = *(byte *)(lVar16 + 0x50);
  uVar28 = (ulong)bVar4;
  uVar22 = *(ulong *)(lVar16 + 0x40);
  uVar21 = (lVar20 + uVar28 & (uVar28 ^ 0xffffffffffffffff)) + uVar22;
  uVar30 = *(undefined8 *)(param_2 + 0x30);
  uVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar23,uVar25,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar30,uVar8,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar9 + -8);
  uVar19 = (ulong)*(byte *)(lVar14 + 0x50);
  lVar24 = *(long *)(lVar14 + 0x40);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),lVar32,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,puVar5);
  lVar17 = *(long *)(lVar10 + -8);
  uVar29 = (ulong)((uint)bVar4 | *(uint *)(lVar17 + 0x50) & 0xf8 | 7);
  uVar1 = *(long *)(lVar17 + 0x40) + 7;
  uVar2 = (uVar1 & 0xfffffffffffffff8) + 8;
  if (uVar2 <= uVar22) {
    uVar2 = uVar22;
  }
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  uVar22 = uVar2 + 1 +
           (lVar24 + (lVar20 + uVar19 & (uVar19 ^ 0xffffffffffffffff)) + uVar29 &
           (uVar29 ^ 0xffffffffffffffff));
  if (uVar22 <= uVar21) {
    uVar22 = uVar21;
  }
  lVar11 = 0;
  _swift_checkMetadataState(0,uVar8);
  lVar26 = *(long *)(lVar11 + -8);
  uVar27 = (ulong)*(byte *)(lVar26 + 0x50);
  lVar3 = uVar2 + 1 + uVar27;
  uVar21 = (lVar3 + (lVar20 + uVar29 & (uVar29 ^ 0xffffffffffffffff)) &
           (uVar27 ^ 0xffffffffffffffff)) + *(long *)(lVar26 + 0x40);
  if (uVar21 <= uVar22) {
    uVar21 = uVar22;
  }
  bVar4 = *(byte *)((long)param_1 + uVar21);
  uVar18 = (uint)bVar4;
  if (2 < bVar4) {
    uVar15 = (uint)uVar21;
    uVar31 = 4;
    if (uVar15 < 4) {
      uVar31 = uVar15;
    }
    if ((int)uVar31 < 2) {
      if (uVar31 == 0) goto LAB_100722678;
      uVar18 = (uint)(byte)*param_1;
    }
    else if (uVar31 == 2) {
      uVar18 = (uint)(ushort)*param_1;
    }
    else if (uVar31 == 3) {
      uVar18 = (uint)(uint3)*param_1;
    }
    else {
      uVar18 = *param_1;
    }
    if (uVar15 < 4) {
      uVar18 = (uVar18 | bVar4 - 3 << (ulong)((uVar15 & 3) << 3)) + 3;
    }
    else {
      uVar18 = uVar18 + 3;
    }
  }
LAB_100722678:
  uVar31 = (uint)uVar2;
  if (uVar18 != 2) {
    if (uVar18 != 1) {
      if (uVar18 != 0) {
        return;
      }
      (**(code **)(lVar13 + 8))(param_1,lVar7);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 8);
      puVar12 = (uint *)((ulong)(lVar20 + uVar28 + (long)param_1) & ~uVar28);
      goto LAB_100722918;
    }
    (**(code **)(lVar13 + 8))(param_1,lVar7);
    uVar21 = (ulong)(lVar20 + uVar19 + (long)param_1) & ~uVar19;
    (**(code **)(lVar14 + 8))(uVar21,lVar9);
    puVar12 = (uint *)(uVar21 + lVar24 + uVar29 & ~uVar29);
    bVar4 = *(byte *)((long)puVar12 + uVar2);
    uVar18 = (uint)bVar4;
    if (3 < bVar4) {
      uVar15 = 4;
      if (uVar31 < 4) {
        uVar15 = uVar31;
      }
      if ((int)uVar15 < 2) {
        if (uVar15 == 0) goto LAB_10072280c;
        uVar15 = (uint)(byte)*puVar12;
      }
      else if (uVar15 == 2) {
        uVar15 = (uint)(ushort)*puVar12;
      }
      else if (uVar15 == 3) {
        uVar15 = (uint)(uint3)*puVar12;
      }
      else {
        uVar15 = *puVar12;
      }
      uVar18 = uVar15 | bVar4 - 4 << (ulong)((uVar31 & 3) << 3);
      if (3 < uVar31) {
        uVar18 = uVar15;
      }
      uVar18 = uVar18 + 4;
    }
LAB_10072280c:
    if (1 < (int)uVar18) {
      if (uVar18 == 2) {
        uVar8 = *(undefined8 *)puVar12;
      }
      else {
        _swift_release(*(undefined8 *)puVar12);
        uVar8 = *(undefined8 *)(puVar12 + 4);
      }
LAB_100722864:
      _swift_release(uVar8);
      return;
    }
    if (uVar18 != 0) {
      (**(code **)(lVar17 + 8))(puVar12,lVar10);
      uVar8 = *(undefined8 *)((ulong)(uVar1 + (long)puVar12) & 0xfffffffffffffff8);
      goto LAB_100722864;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 8);
    goto LAB_100722918;
  }
  (**(code **)(lVar13 + 8))(param_1,lVar7);
  puVar12 = (uint *)((ulong)(lVar20 + uVar29 + (long)param_1) & ~uVar29);
  bVar4 = *(byte *)((long)puVar12 + uVar2);
  uVar18 = (uint)bVar4;
  if (3 < bVar4) {
    uVar15 = 4;
    if (uVar31 < 4) {
      uVar15 = uVar31;
    }
    if ((int)uVar15 < 2) {
      if (uVar15 == 0) goto LAB_1007228a4;
      uVar15 = (uint)(byte)*puVar12;
    }
    else if (uVar15 == 2) {
      uVar15 = (uint)(ushort)*puVar12;
    }
    else if (uVar15 == 3) {
      uVar15 = (uint)(uint3)*puVar12;
    }
    else {
      uVar15 = *puVar12;
    }
    uVar18 = uVar15 | bVar4 - 4 << (ulong)((uVar31 & 3) << 3);
    if (3 < uVar31) {
      uVar18 = uVar15;
    }
    uVar18 = uVar18 + 4;
  }
LAB_1007228a4:
  if ((int)uVar18 < 2) {
    if (uVar18 != 0) {
      (**(code **)(lVar17 + 8))(puVar12,lVar10);
      uVar8 = *(undefined8 *)((ulong)(uVar1 + (long)puVar12) & 0xfffffffffffffff8);
      goto LAB_100722904;
    }
    (**(code **)(lVar16 + 8))(puVar12,lVar32);
  }
  else {
    if (uVar18 == 2) {
      uVar8 = *(undefined8 *)puVar12;
    }
    else {
      _swift_release(*(undefined8 *)puVar12);
      uVar8 = *(undefined8 *)(puVar12 + 4);
    }
LAB_100722904:
    _swift_release(uVar8);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar26 + 8);
  puVar12 = (uint *)((ulong)(lVar3 + (long)puVar12) & ~uVar27);
  lVar32 = lVar11;
LAB_100722918:
                    /* WARNING: Could not recover jumptable at 0x000100722934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar12,lVar32);
  return;
}



/* Address: 0x100722448 | FUN_100722448 */

void FUN_100722448(uint *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  code *UNRECOVERED_JUMPTABLE;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 uVar30;
  uint uVar31;
  long lVar32;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar23 = *(undefined8 *)(param_2 + 0x20);
  uVar25 = *(undefined8 *)(param_2 + 0x10);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar23,uVar25,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar13 = *(long *)(lVar7 + -8);
  lVar20 = *(long *)(lVar13 + 0x40);
  lVar32 = *(long *)(param_2 + 0x18);
  lVar16 = *(long *)(lVar32 + -8);
  bVar4 = *(byte *)(lVar16 + 0x50);
  uVar28 = (ulong)bVar4;
  uVar22 = *(ulong *)(lVar16 + 0x40);
  uVar21 = (lVar20 + uVar28 & (uVar28 ^ 0xffffffffffffffff)) + uVar22;
  uVar30 = *(undefined8 *)(param_2 + 0x30);
  uVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar23,uVar25,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar30,uVar8,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar9 + -8);
  uVar19 = (ulong)*(byte *)(lVar14 + 0x50);
  lVar24 = *(long *)(lVar14 + 0x40);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),lVar32,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,puVar5);
  lVar17 = *(long *)(lVar10 + -8);
  uVar29 = (ulong)((uint)bVar4 | *(uint *)(lVar17 + 0x50) & 0xf8 | 7);
  uVar1 = *(long *)(lVar17 + 0x40) + 7;
  uVar2 = (uVar1 & 0xfffffffffffffff8) + 8;
  if (uVar2 <= uVar22) {
    uVar2 = uVar22;
  }
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  uVar22 = uVar2 + 1 +
           (lVar24 + (lVar20 + uVar19 & (uVar19 ^ 0xffffffffffffffff)) + uVar29 &
           (uVar29 ^ 0xffffffffffffffff));
  if (uVar22 <= uVar21) {
    uVar22 = uVar21;
  }
  lVar11 = 0;
  _swift_checkMetadataState(0,uVar8);
  lVar26 = *(long *)(lVar11 + -8);
  uVar27 = (ulong)*(byte *)(lVar26 + 0x50);
  lVar3 = uVar2 + 1 + uVar27;
  uVar21 = (lVar3 + (lVar20 + uVar29 & (uVar29 ^ 0xffffffffffffffff)) &
           (uVar27 ^ 0xffffffffffffffff)) + *(long *)(lVar26 + 0x40);
  if (uVar21 <= uVar22) {
    uVar21 = uVar22;
  }
  bVar4 = *(byte *)((long)param_1 + uVar21);
  uVar18 = (uint)bVar4;
  if (2 < bVar4) {
    uVar15 = (uint)uVar21;
    uVar31 = 4;
    if (uVar15 < 4) {
      uVar31 = uVar15;
    }
    if ((int)uVar31 < 2) {
      if (uVar31 == 0) goto LAB_100722678;
      uVar18 = (uint)(byte)*param_1;
    }
    else if (uVar31 == 2) {
      uVar18 = (uint)(ushort)*param_1;
    }
    else if (uVar31 == 3) {
      uVar18 = (uint)(uint3)*param_1;
    }
    else {
      uVar18 = *param_1;
    }
    if (uVar15 < 4) {
      uVar18 = (uVar18 | bVar4 - 3 << (ulong)((uVar15 & 3) << 3)) + 3;
    }
    else {
      uVar18 = uVar18 + 3;
    }
  }
LAB_100722678:
  uVar31 = (uint)uVar2;
  if (uVar18 != 2) {
    if (uVar18 != 1) {
      if (uVar18 != 0) {
        return;
      }
      (**(code **)(lVar13 + 8))(param_1,lVar7);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 8);
      puVar12 = (uint *)((ulong)(lVar20 + uVar28 + (long)param_1) & ~uVar28);
      goto LAB_100722918;
    }
    (**(code **)(lVar13 + 8))(param_1,lVar7);
    uVar21 = (ulong)(lVar20 + uVar19 + (long)param_1) & ~uVar19;
    (**(code **)(lVar14 + 8))(uVar21,lVar9);
    puVar12 = (uint *)(uVar21 + lVar24 + uVar29 & ~uVar29);
    bVar4 = *(byte *)((long)puVar12 + uVar2);
    uVar18 = (uint)bVar4;
    if (3 < bVar4) {
      uVar15 = 4;
      if (uVar31 < 4) {
        uVar15 = uVar31;
      }
      if ((int)uVar15 < 2) {
        if (uVar15 == 0) goto LAB_10072280c;
        uVar15 = (uint)(byte)*puVar12;
      }
      else if (uVar15 == 2) {
        uVar15 = (uint)(ushort)*puVar12;
      }
      else if (uVar15 == 3) {
        uVar15 = (uint)(uint3)*puVar12;
      }
      else {
        uVar15 = *puVar12;
      }
      uVar18 = uVar15 | bVar4 - 4 << (ulong)((uVar31 & 3) << 3);
      if (3 < uVar31) {
        uVar18 = uVar15;
      }
      uVar18 = uVar18 + 4;
    }
LAB_10072280c:
    if (1 < (int)uVar18) {
      if (uVar18 == 2) {
        uVar8 = *(undefined8 *)puVar12;
      }
      else {
        _swift_release(*(undefined8 *)puVar12);
        uVar8 = *(undefined8 *)(puVar12 + 4);
      }
LAB_100722864:
      _swift_release(uVar8);
      return;
    }
    if (uVar18 != 0) {
      (**(code **)(lVar17 + 8))(puVar12,lVar10);
      uVar8 = *(undefined8 *)((ulong)(uVar1 + (long)puVar12) & 0xfffffffffffffff8);
      goto LAB_100722864;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 8);
    goto LAB_100722918;
  }
  (**(code **)(lVar13 + 8))(param_1,lVar7);
  puVar12 = (uint *)((ulong)(lVar20 + uVar29 + (long)param_1) & ~uVar29);
  bVar4 = *(byte *)((long)puVar12 + uVar2);
  uVar18 = (uint)bVar4;
  if (3 < bVar4) {
    uVar15 = 4;
    if (uVar31 < 4) {
      uVar15 = uVar31;
    }
    if ((int)uVar15 < 2) {
      if (uVar15 == 0) goto LAB_1007228a4;
      uVar15 = (uint)(byte)*puVar12;
    }
    else if (uVar15 == 2) {
      uVar15 = (uint)(ushort)*puVar12;
    }
    else if (uVar15 == 3) {
      uVar15 = (uint)(uint3)*puVar12;
    }
    else {
      uVar15 = *puVar12;
    }
    uVar18 = uVar15 | bVar4 - 4 << (ulong)((uVar31 & 3) << 3);
    if (3 < uVar31) {
      uVar18 = uVar15;
    }
    uVar18 = uVar18 + 4;
  }
LAB_1007228a4:
  if ((int)uVar18 < 2) {
    if (uVar18 != 0) {
      (**(code **)(lVar17 + 8))(puVar12,lVar10);
      uVar8 = *(undefined8 *)((ulong)(uVar1 + (long)puVar12) & 0xfffffffffffffff8);
      goto LAB_100722904;
    }
    (**(code **)(lVar16 + 8))(puVar12,lVar32);
  }
  else {
    if (uVar18 == 2) {
      uVar8 = *(undefined8 *)puVar12;
    }
    else {
      _swift_release(*(undefined8 *)puVar12);
      uVar8 = *(undefined8 *)(puVar12 + 4);
    }
LAB_100722904:
    _swift_release(uVar8);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar26 + 8);
  puVar12 = (uint *)((ulong)(lVar3 + (long)puVar12) & ~uVar27);
  lVar32 = lVar11;
LAB_100722918:
                    /* WARNING: Could not recover jumptable at 0x000100722934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar12,lVar32);
  return;
}



/* Address: 0x100722938 | thunk_FUN_10072293c */

void * thunk_FUN_10072293c(void *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  uint *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 uVar35;
  long lVar36;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar29 = *(undefined8 *)(param_3 + 0x20);
  uVar30 = *(undefined8 *)(param_3 + 0x10);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar29,uVar30,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar8 + -8);
  lVar23 = *(long *)(lVar14 + 0x40);
  lVar22 = *(long *)(param_3 + 0x18);
  lVar18 = *(long *)(lVar22 + -8);
  bVar5 = *(byte *)(lVar18 + 0x50);
  uVar33 = (ulong)bVar5;
  uVar27 = lVar23 + uVar33;
  uVar26 = *(ulong *)(lVar18 + 0x40);
  uVar32 = (uVar27 & (uVar33 ^ 0xffffffffffffffff)) + uVar26;
  uVar35 = *(undefined8 *)(param_3 + 0x30);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar29,uVar30,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar35,uVar9,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar15 = *(long *)(lVar10 + -8);
  uVar20 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar3 = lVar23 + uVar20;
  lVar36 = *(long *)(lVar15 + 0x40);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar22,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,puVar6);
  lVar19 = *(long *)(lVar11 + -8);
  uVar34 = (ulong)((uint)bVar5 | *(uint *)(lVar19 + 0x50) & 0xf8 | 7);
  uVar1 = *(long *)(lVar19 + 0x40) + 7;
  uVar2 = (uVar1 & 0xfffffffffffffff8) + 8;
  if (uVar2 <= uVar26) {
    uVar2 = uVar26;
  }
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  uVar26 = uVar2 + 1 +
           (lVar36 + (uVar3 & (uVar20 ^ 0xffffffffffffffff)) + uVar34 &
           (uVar34 ^ 0xffffffffffffffff));
  if (uVar26 <= uVar32) {
    uVar26 = uVar32;
  }
  uVar32 = lVar23 + uVar34;
  lVar12 = 0;
  _swift_checkMetadataState(0,uVar9);
  lVar31 = *(long *)(lVar12 + -8);
  uVar24 = (ulong)*(byte *)(lVar31 + 0x50);
  lVar23 = uVar2 + 1 + uVar24;
  uVar4 = (lVar23 + (uVar32 & (uVar34 ^ 0xffffffffffffffff)) & (uVar24 ^ 0xffffffffffffffff)) +
          *(long *)(lVar31 + 0x40);
  if (uVar4 <= uVar26) {
    uVar4 = uVar26;
  }
  bVar5 = *(byte *)((long)param_2 + uVar4);
  uVar16 = (uint)bVar5;
  if (2 < bVar5) {
    uVar17 = (uint)uVar4;
    uVar21 = 4;
    if (uVar17 < 4) {
      uVar21 = uVar17;
    }
    if ((int)uVar21 < 2) {
      if (uVar21 == 0) goto LAB_100722b64;
      uVar16 = (uint)(byte)*param_2;
    }
    else if (uVar21 == 2) {
      uVar16 = (uint)(ushort)*param_2;
    }
    else if (uVar21 == 3) {
      uVar16 = (uint)(uint3)*param_2;
    }
    else {
      uVar16 = *param_2;
    }
    if (uVar17 < 4) {
      uVar16 = (uVar16 | bVar5 - 3 << (ulong)((uVar17 & 3) << 3)) + 3;
    }
    else {
      uVar16 = uVar16 + 3;
    }
  }
LAB_100722b64:
  uVar26 = ~uVar34;
  uVar21 = (uint)uVar2;
  if (uVar16 != 2) {
    if (uVar16 != 1) {
      if (uVar16 == 0) {
        (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar8);
        (**(code **)(lVar18 + 0x10))
                  (uVar27 + (long)param_1 & ~uVar33,(ulong)(uVar27 + (long)param_2) & ~uVar33,lVar22
                  );
        *(undefined1 *)((long)param_1 + uVar4) = 0;
        return param_1;
      }
      pvVar13 = _memcpy(param_1,param_2,uVar4 + 1);
      return pvVar13;
    }
    (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar8);
    uVar27 = uVar3 + (long)param_1 & ~uVar20;
    uVar32 = (ulong)(uVar3 + (long)param_2) & ~uVar20;
    (**(code **)(lVar15 + 0x10))(uVar27,uVar32,lVar10);
    puVar25 = (undefined8 *)(uVar27 + lVar36 + uVar34 & uVar26);
    puVar28 = (uint *)(uVar32 + lVar36 + uVar34 & uVar26);
    bVar5 = *(byte *)((long)puVar28 + uVar2);
    uVar16 = (uint)bVar5;
    if (3 < bVar5) {
      uVar17 = 4;
      if (uVar21 < 4) {
        uVar17 = uVar21;
      }
      if ((int)uVar17 < 2) {
        if (uVar17 == 0) goto LAB_100722d58;
        uVar17 = (uint)(byte)*puVar28;
      }
      else if (uVar17 == 2) {
        uVar17 = (uint)(ushort)*puVar28;
      }
      else if (uVar17 == 3) {
        uVar17 = (uint)(uint3)*puVar28;
      }
      else {
        uVar17 = *puVar28;
      }
      uVar16 = uVar17 | bVar5 - 4 << (ulong)((uVar21 & 3) << 3);
      if (3 < uVar21) {
        uVar16 = uVar17;
      }
      uVar16 = uVar16 + 4;
    }
LAB_100722d58:
    if ((int)uVar16 < 2) {
      if (uVar16 == 0) {
        (**(code **)(lVar18 + 0x10))(puVar25,puVar28,lVar22);
        *(undefined1 *)((long)puVar25 + uVar2) = 0;
        goto LAB_100722e08;
      }
      (**(code **)(lVar19 + 0x10))(puVar25,puVar28,lVar11);
      uVar9 = *(undefined8 *)((ulong)(uVar1 + (long)puVar28) & 0xfffffffffffffff8);
      *(undefined8 *)(uVar1 + (long)puVar25 & 0xfffffffffffffff8) = uVar9;
      *(undefined1 *)((long)puVar25 + uVar2) = 1;
    }
    else if (uVar16 == 2) {
      uVar9 = *(undefined8 *)puVar28;
      *puVar25 = uVar9;
      *(undefined1 *)((long)puVar25 + uVar2) = 2;
    }
    else {
      *puVar25 = *(undefined8 *)puVar28;
      puVar25[1] = *(undefined8 *)(puVar28 + 2);
      uVar9 = *(undefined8 *)(puVar28 + 4);
      puVar25[2] = uVar9;
      *(undefined1 *)((long)puVar25 + uVar2) = 3;
      _swift_retain();
    }
    _swift_retain(uVar9);
LAB_100722e08:
    *(undefined1 *)((long)param_1 + uVar4) = 1;
    return param_1;
  }
  (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar8);
  puVar25 = (undefined8 *)(uVar32 + (long)param_1 & uVar26);
  puVar28 = (uint *)((ulong)(uVar32 + (long)param_2) & uVar26);
  bVar5 = *(byte *)((long)puVar28 + uVar2);
  uVar16 = (uint)bVar5;
  if (3 < bVar5) {
    uVar17 = 4;
    if (uVar21 < 4) {
      uVar17 = uVar21;
    }
    if ((int)uVar17 < 2) {
      if (uVar17 == 0) goto LAB_100722e34;
      uVar17 = (uint)(byte)*puVar28;
    }
    else if (uVar17 == 2) {
      uVar17 = (uint)(ushort)*puVar28;
    }
    else if (uVar17 == 3) {
      uVar17 = (uint)(uint3)*puVar28;
    }
    else {
      uVar17 = *puVar28;
    }
    uVar16 = uVar17 | bVar5 - 4 << (ulong)((uVar21 & 3) << 3);
    if (3 < uVar21) {
      uVar16 = uVar17;
    }
    uVar16 = uVar16 + 4;
  }
LAB_100722e34:
  if ((int)uVar16 < 2) {
    if (uVar16 == 0) {
      (**(code **)(lVar18 + 0x10))(puVar25,puVar28,lVar22);
      *(undefined1 *)((long)puVar25 + uVar2) = 0;
      goto LAB_100722eec;
    }
    (**(code **)(lVar19 + 0x10))(puVar25,puVar28,lVar11);
    uVar9 = *(undefined8 *)((ulong)(uVar1 + (long)puVar28) & 0xfffffffffffffff8);
    *(undefined8 *)(uVar1 + (long)puVar25 & 0xfffffffffffffff8) = uVar9;
    *(undefined1 *)((long)puVar25 + uVar2) = 1;
  }
  else if (uVar16 == 2) {
    uVar9 = *(undefined8 *)puVar28;
    *puVar25 = uVar9;
    *(undefined1 *)((long)puVar25 + uVar2) = 2;
  }
  else {
    *puVar25 = *(undefined8 *)puVar28;
    puVar25[1] = *(undefined8 *)(puVar28 + 2);
    uVar9 = *(undefined8 *)(puVar28 + 4);
    puVar25[2] = uVar9;
    *(undefined1 *)((long)puVar25 + uVar2) = 3;
    _swift_retain();
  }
  _swift_retain(uVar9);
LAB_100722eec:
  (**(code **)(lVar31 + 0x10))
            (lVar23 + (long)puVar25 & ~uVar24,(ulong)(lVar23 + (long)puVar28) & ~uVar24,lVar12);
  *(undefined1 *)((long)param_1 + uVar4) = 2;
  return param_1;
}



/* Address: 0x10072293c | FUN_10072293c */

void * FUN_10072293c(void *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  uint *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 uVar35;
  long lVar36;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar29 = *(undefined8 *)(param_3 + 0x20);
  uVar30 = *(undefined8 *)(param_3 + 0x10);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar29,uVar30,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar8 + -8);
  lVar23 = *(long *)(lVar14 + 0x40);
  lVar22 = *(long *)(param_3 + 0x18);
  lVar18 = *(long *)(lVar22 + -8);
  bVar5 = *(byte *)(lVar18 + 0x50);
  uVar33 = (ulong)bVar5;
  uVar27 = lVar23 + uVar33;
  uVar26 = *(ulong *)(lVar18 + 0x40);
  uVar32 = (uVar27 & (uVar33 ^ 0xffffffffffffffff)) + uVar26;
  uVar35 = *(undefined8 *)(param_3 + 0x30);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar29,uVar30,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar35,uVar9,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar15 = *(long *)(lVar10 + -8);
  uVar20 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar3 = lVar23 + uVar20;
  lVar36 = *(long *)(lVar15 + 0x40);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar22,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,puVar6);
  lVar19 = *(long *)(lVar11 + -8);
  uVar34 = (ulong)((uint)bVar5 | *(uint *)(lVar19 + 0x50) & 0xf8 | 7);
  uVar1 = *(long *)(lVar19 + 0x40) + 7;
  uVar2 = (uVar1 & 0xfffffffffffffff8) + 8;
  if (uVar2 <= uVar26) {
    uVar2 = uVar26;
  }
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  uVar26 = uVar2 + 1 +
           (lVar36 + (uVar3 & (uVar20 ^ 0xffffffffffffffff)) + uVar34 &
           (uVar34 ^ 0xffffffffffffffff));
  if (uVar26 <= uVar32) {
    uVar26 = uVar32;
  }
  uVar32 = lVar23 + uVar34;
  lVar12 = 0;
  _swift_checkMetadataState(0,uVar9);
  lVar31 = *(long *)(lVar12 + -8);
  uVar24 = (ulong)*(byte *)(lVar31 + 0x50);
  lVar23 = uVar2 + 1 + uVar24;
  uVar4 = (lVar23 + (uVar32 & (uVar34 ^ 0xffffffffffffffff)) & (uVar24 ^ 0xffffffffffffffff)) +
          *(long *)(lVar31 + 0x40);
  if (uVar4 <= uVar26) {
    uVar4 = uVar26;
  }
  bVar5 = *(byte *)((long)param_2 + uVar4);
  uVar16 = (uint)bVar5;
  if (2 < bVar5) {
    uVar17 = (uint)uVar4;
    uVar21 = 4;
    if (uVar17 < 4) {
      uVar21 = uVar17;
    }
    if ((int)uVar21 < 2) {
      if (uVar21 == 0) goto LAB_100722b64;
      uVar16 = (uint)(byte)*param_2;
    }
    else if (uVar21 == 2) {
      uVar16 = (uint)(ushort)*param_2;
    }
    else if (uVar21 == 3) {
      uVar16 = (uint)(uint3)*param_2;
    }
    else {
      uVar16 = *param_2;
    }
    if (uVar17 < 4) {
      uVar16 = (uVar16 | bVar5 - 3 << (ulong)((uVar17 & 3) << 3)) + 3;
    }
    else {
      uVar16 = uVar16 + 3;
    }
  }
LAB_100722b64:
  uVar26 = ~uVar34;
  uVar21 = (uint)uVar2;
  if (uVar16 != 2) {
    if (uVar16 != 1) {
      if (uVar16 == 0) {
        (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar8);
        (**(code **)(lVar18 + 0x10))
                  (uVar27 + (long)param_1 & ~uVar33,(ulong)(uVar27 + (long)param_2) & ~uVar33,lVar22
                  );
        *(undefined1 *)((long)param_1 + uVar4) = 0;
        return param_1;
      }
      pvVar13 = _memcpy(param_1,param_2,uVar4 + 1);
      return pvVar13;
    }
    (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar8);
    uVar27 = uVar3 + (long)param_1 & ~uVar20;
    uVar32 = (ulong)(uVar3 + (long)param_2) & ~uVar20;
    (**(code **)(lVar15 + 0x10))(uVar27,uVar32,lVar10);
    puVar25 = (undefined8 *)(uVar27 + lVar36 + uVar34 & uVar26);
    puVar28 = (uint *)(uVar32 + lVar36 + uVar34 & uVar26);
    bVar5 = *(byte *)((long)puVar28 + uVar2);
    uVar16 = (uint)bVar5;
    if (3 < bVar5) {
      uVar17 = 4;
      if (uVar21 < 4) {
        uVar17 = uVar21;
      }
      if ((int)uVar17 < 2) {
        if (uVar17 == 0) goto LAB_100722d58;
        uVar17 = (uint)(byte)*puVar28;
      }
      else if (uVar17 == 2) {
        uVar17 = (uint)(ushort)*puVar28;
      }
      else if (uVar17 == 3) {
        uVar17 = (uint)(uint3)*puVar28;
      }
      else {
        uVar17 = *puVar28;
      }
      uVar16 = uVar17 | bVar5 - 4 << (ulong)((uVar21 & 3) << 3);
      if (3 < uVar21) {
        uVar16 = uVar17;
      }
      uVar16 = uVar16 + 4;
    }
LAB_100722d58:
    if ((int)uVar16 < 2) {
      if (uVar16 == 0) {
        (**(code **)(lVar18 + 0x10))(puVar25,puVar28,lVar22);
        *(undefined1 *)((long)puVar25 + uVar2) = 0;
        goto LAB_100722e08;
      }
      (**(code **)(lVar19 + 0x10))(puVar25,puVar28,lVar11);
      uVar9 = *(undefined8 *)((ulong)(uVar1 + (long)puVar28) & 0xfffffffffffffff8);
      *(undefined8 *)(uVar1 + (long)puVar25 & 0xfffffffffffffff8) = uVar9;
      *(undefined1 *)((long)puVar25 + uVar2) = 1;
    }
    else if (uVar16 == 2) {
      uVar9 = *(undefined8 *)puVar28;
      *puVar25 = uVar9;
      *(undefined1 *)((long)puVar25 + uVar2) = 2;
    }
    else {
      *puVar25 = *(undefined8 *)puVar28;
      puVar25[1] = *(undefined8 *)(puVar28 + 2);
      uVar9 = *(undefined8 *)(puVar28 + 4);
      puVar25[2] = uVar9;
      *(undefined1 *)((long)puVar25 + uVar2) = 3;
      _swift_retain();
    }
    _swift_retain(uVar9);
LAB_100722e08:
    *(undefined1 *)((long)param_1 + uVar4) = 1;
    return param_1;
  }
  (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar8);
  puVar25 = (undefined8 *)(uVar32 + (long)param_1 & uVar26);
  puVar28 = (uint *)((ulong)(uVar32 + (long)param_2) & uVar26);
  bVar5 = *(byte *)((long)puVar28 + uVar2);
  uVar16 = (uint)bVar5;
  if (3 < bVar5) {
    uVar17 = 4;
    if (uVar21 < 4) {
      uVar17 = uVar21;
    }
    if ((int)uVar17 < 2) {
      if (uVar17 == 0) goto LAB_100722e34;
      uVar17 = (uint)(byte)*puVar28;
    }
    else if (uVar17 == 2) {
      uVar17 = (uint)(ushort)*puVar28;
    }
    else if (uVar17 == 3) {
      uVar17 = (uint)(uint3)*puVar28;
    }
    else {
      uVar17 = *puVar28;
    }
    uVar16 = uVar17 | bVar5 - 4 << (ulong)((uVar21 & 3) << 3);
    if (3 < uVar21) {
      uVar16 = uVar17;
    }
    uVar16 = uVar16 + 4;
  }
LAB_100722e34:
  if ((int)uVar16 < 2) {
    if (uVar16 == 0) {
      (**(code **)(lVar18 + 0x10))(puVar25,puVar28,lVar22);
      *(undefined1 *)((long)puVar25 + uVar2) = 0;
      goto LAB_100722eec;
    }
    (**(code **)(lVar19 + 0x10))(puVar25,puVar28,lVar11);
    uVar9 = *(undefined8 *)((ulong)(uVar1 + (long)puVar28) & 0xfffffffffffffff8);
    *(undefined8 *)(uVar1 + (long)puVar25 & 0xfffffffffffffff8) = uVar9;
    *(undefined1 *)((long)puVar25 + uVar2) = 1;
  }
  else if (uVar16 == 2) {
    uVar9 = *(undefined8 *)puVar28;
    *puVar25 = uVar9;
    *(undefined1 *)((long)puVar25 + uVar2) = 2;
  }
  else {
    *puVar25 = *(undefined8 *)puVar28;
    puVar25[1] = *(undefined8 *)(puVar28 + 2);
    uVar9 = *(undefined8 *)(puVar28 + 4);
    puVar25[2] = uVar9;
    *(undefined1 *)((long)puVar25 + uVar2) = 3;
    _swift_retain();
  }
  _swift_retain(uVar9);
LAB_100722eec:
  (**(code **)(lVar31 + 0x10))
            (lVar23 + (long)puVar25 & ~uVar24,(ulong)(lVar23 + (long)puVar28) & ~uVar24,lVar12);
  *(undefined1 *)((long)param_1 + uVar4) = 2;
  return param_1;
}



/* Address: 0x100722f38 | thunk_FUN_100722f3c */

uint * thunk_FUN_100722f3c(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  byte bVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  code *pcVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  ulong uVar32;
  uint *puVar33;
  ulong uVar34;
  undefined8 *puVar35;
  uint uVar36;
  undefined8 uVar37;
  long lVar38;
  long lVar39;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  if (param_1 == param_2) {
    return param_1;
  }
  uVar28 = *(undefined8 *)(param_3 + 0x20);
  uVar30 = *(undefined8 *)(param_3 + 0x10);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar28,uVar30,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar16 = *(long *)(lVar8 + -8);
  lVar39 = *(long *)(lVar16 + 0x40);
  lVar38 = *(long *)(param_3 + 0x18);
  lVar22 = *(long *)(lVar38 + -8);
  bVar15 = *(byte *)(lVar22 + 0x50);
  uVar34 = (ulong)bVar15;
  uVar32 = lVar39 + uVar34;
  uVar27 = *(ulong *)(lVar22 + 0x40);
  uVar3 = (uVar32 & (uVar34 ^ 0xffffffffffffffff)) + uVar27;
  uVar37 = *(undefined8 *)(param_3 + 0x30);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar28,uVar30,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar37,uVar9,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar17 = *(long *)(lVar10 + -8);
  uVar25 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar4 = lVar39 + uVar25;
  lVar29 = *(long *)(lVar17 + 0x40);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar38,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,puVar6);
  lVar23 = *(long *)(lVar11 + -8);
  uVar26 = (ulong)((uint)bVar15 | *(uint *)(lVar23 + 0x50) & 0xf8 | 7);
  uVar1 = *(long *)(lVar23 + 0x40) + 7;
  uVar2 = (uVar1 & 0xfffffffffffffff8) + 8;
  if (uVar2 <= uVar27) {
    uVar2 = uVar27;
  }
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  uVar27 = uVar2 + 1 +
           (lVar29 + (uVar4 & (uVar25 ^ 0xffffffffffffffff)) + uVar26 &
           (uVar26 ^ 0xffffffffffffffff));
  if (uVar27 <= uVar3) {
    uVar27 = uVar3;
  }
  uVar3 = lVar39 + uVar26;
  lVar12 = 0;
  _swift_checkMetadataState(0,uVar9);
  lVar31 = *(long *)(lVar12 + -8);
  uVar18 = (ulong)*(byte *)(lVar31 + 0x50);
  lVar39 = uVar2 + 1 + uVar18;
  uVar5 = (lVar39 + (uVar3 & (uVar26 ^ 0xffffffffffffffff)) & (uVar18 ^ 0xffffffffffffffff)) +
          *(long *)(lVar31 + 0x40);
  if (uVar5 <= uVar27) {
    uVar5 = uVar27;
  }
  bVar15 = *(byte *)((long)param_1 + uVar5);
  uVar19 = (uint)bVar15;
  uVar21 = (uint)uVar5;
  if (2 < bVar15) {
    uVar36 = 4;
    if (uVar21 < 4) {
      uVar36 = uVar21;
    }
    if ((int)uVar36 < 2) {
      if (uVar36 == 0) goto LAB_100723190;
      uVar19 = (uint)(byte)*param_1;
    }
    else if (uVar36 == 2) {
      uVar19 = (uint)(ushort)*param_1;
    }
    else if (uVar36 == 3) {
      uVar19 = (uint)(uint3)*param_1;
    }
    else {
      uVar19 = *param_1;
    }
    if (uVar21 < 4) {
      uVar19 = uVar19 | bVar15 - 3 << (ulong)((uVar21 & 3) << 3);
    }
    uVar19 = uVar19 + 3;
  }
LAB_100723190:
  uVar34 = ~uVar34;
  uVar25 = ~uVar25;
  uVar27 = ~uVar26;
  uVar18 = ~uVar18;
  uVar36 = (uint)uVar2;
  if (uVar19 == 2) {
    (**(code **)(lVar16 + 8))(param_1,lVar8);
    puVar33 = (uint *)((ulong)(uVar3 + (long)param_1) & uVar27);
    bVar15 = *(byte *)((long)puVar33 + uVar2);
    uVar19 = (uint)bVar15;
    if (3 < bVar15) {
      uVar20 = 4;
      if (uVar36 < 4) {
        uVar20 = uVar36;
      }
      if ((int)uVar20 < 2) {
        if (uVar20 == 0) goto LAB_1007233b8;
        uVar20 = (uint)(byte)*puVar33;
      }
      else if (uVar20 == 2) {
        uVar20 = (uint)(ushort)*puVar33;
      }
      else if (uVar20 == 3) {
        uVar20 = (uint)(uint3)*puVar33;
      }
      else {
        uVar20 = *puVar33;
      }
      uVar19 = uVar20 | bVar15 - 4 << (ulong)((uVar36 & 3) << 3);
      if (3 < uVar36) {
        uVar19 = uVar20;
      }
      uVar19 = uVar19 + 4;
    }
LAB_1007233b8:
    if ((int)uVar19 < 2) {
      if (uVar19 != 0) {
        (**(code **)(lVar23 + 8))(puVar33,lVar11);
        uVar9 = *(undefined8 *)((ulong)(uVar1 + (long)puVar33) & 0xfffffffffffffff8);
        goto LAB_10072341c;
      }
      (**(code **)(lVar22 + 8))(puVar33,lVar38);
    }
    else {
      if (uVar19 == 2) {
        uVar9 = *(undefined8 *)puVar33;
      }
      else {
        _swift_release(*(undefined8 *)puVar33);
        uVar9 = *(undefined8 *)(puVar33 + 4);
      }
LAB_10072341c:
      _swift_release(uVar9);
    }
    pcVar24 = *(code **)(lVar31 + 8);
    uVar13 = (ulong)(lVar39 + (long)puVar33) & uVar18;
    lVar14 = lVar12;
LAB_100723438:
    (*pcVar24)(uVar13,lVar14);
  }
  else if (uVar19 == 1) {
    (**(code **)(lVar16 + 8))(param_1,lVar8);
    uVar13 = (ulong)(uVar4 + (long)param_1) & uVar25;
    (**(code **)(lVar17 + 8))(uVar13,lVar10);
    puVar33 = (uint *)(uVar13 + lVar29 + uVar26 & uVar27);
    bVar15 = *(byte *)((long)puVar33 + uVar2);
    uVar19 = (uint)bVar15;
    if (3 < bVar15) {
      uVar20 = 4;
      if (uVar36 < 4) {
        uVar20 = uVar36;
      }
      if ((int)uVar20 < 2) {
        if (uVar20 == 0) goto LAB_100723324;
        uVar20 = (uint)(byte)*puVar33;
      }
      else if (uVar20 == 2) {
        uVar20 = (uint)(ushort)*puVar33;
      }
      else if (uVar20 == 3) {
        uVar20 = (uint)(uint3)*puVar33;
      }
      else {
        uVar20 = *puVar33;
      }
      uVar19 = uVar20 | bVar15 - 4 << (ulong)((uVar36 & 3) << 3);
      if (3 < uVar36) {
        uVar19 = uVar20;
      }
      uVar19 = uVar19 + 4;
    }
LAB_100723324:
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) {
        (**(code **)(lVar22 + 8))(puVar33,lVar38);
        goto LAB_10072343c;
      }
      (**(code **)(lVar23 + 8))(puVar33,lVar11);
      uVar9 = *(undefined8 *)((ulong)(uVar1 + (long)puVar33) & 0xfffffffffffffff8);
    }
    else if (uVar19 == 2) {
      uVar9 = *(undefined8 *)puVar33;
    }
    else {
      _swift_release(*(undefined8 *)puVar33);
      uVar9 = *(undefined8 *)(puVar33 + 4);
    }
    _swift_release(uVar9);
  }
  else if (uVar19 == 0) {
    (**(code **)(lVar16 + 8))(param_1,lVar8);
    pcVar24 = *(code **)(lVar22 + 8);
    uVar13 = (ulong)(uVar32 + (long)param_1) & uVar34;
    lVar14 = lVar38;
    goto LAB_100723438;
  }
LAB_10072343c:
  bVar15 = *(byte *)((long)param_2 + uVar5);
  uVar19 = (uint)bVar15;
  if (2 < bVar15) {
    uVar20 = 4;
    if (uVar21 < 4) {
      uVar20 = uVar21;
    }
    if ((int)uVar20 < 2) {
      if (uVar20 == 0) goto joined_r0x0001007234ac;
      uVar19 = (uint)(byte)*param_2;
    }
    else if (uVar20 == 2) {
      uVar19 = (uint)(ushort)*param_2;
    }
    else if (uVar20 == 3) {
      uVar19 = (uint)(uint3)*param_2;
    }
    else {
      uVar19 = *param_2;
    }
    if (uVar21 < 4) {
      uVar19 = (uVar19 | bVar15 - 3 << (ulong)((uVar21 & 3) << 3)) + 3;
    }
    else {
      uVar19 = uVar19 + 3;
    }
  }
joined_r0x0001007234ac:
  if (uVar19 != 2) {
    if (uVar19 != 1) {
      if (uVar19 == 0) {
        (**(code **)(lVar16 + 0x10))(param_1,param_2,lVar8);
        (**(code **)(lVar22 + 0x10))
                  ((ulong)(uVar32 + (long)param_1) & uVar34,(ulong)(uVar32 + (long)param_2) & uVar34
                   ,lVar38);
        *(byte *)((long)param_1 + uVar5) = 0;
        return param_1;
      }
      puVar33 = _memcpy(param_1,param_2,uVar5 + 1);
      return puVar33;
    }
    (**(code **)(lVar16 + 0x10))(param_1,param_2,lVar8);
    uVar32 = (ulong)(uVar4 + (long)param_1) & uVar25;
    uVar25 = (ulong)(uVar4 + (long)param_2) & uVar25;
    (**(code **)(lVar17 + 0x10))(uVar32,uVar25,lVar10);
    puVar35 = (undefined8 *)(uVar32 + lVar29 + uVar26 & uVar27);
    puVar33 = (uint *)(uVar25 + lVar29 + uVar26 & uVar27);
    bVar15 = *(byte *)((long)puVar33 + uVar2);
    uVar19 = (uint)bVar15;
    if (3 < bVar15) {
      uVar21 = 4;
      if (uVar36 < 4) {
        uVar21 = uVar36;
      }
      if ((int)uVar21 < 2) {
        if (uVar21 == 0) goto LAB_100723698;
        uVar21 = (uint)(byte)*puVar33;
      }
      else if (uVar21 == 2) {
        uVar21 = (uint)(ushort)*puVar33;
      }
      else if (uVar21 == 3) {
        uVar21 = (uint)(uint3)*puVar33;
      }
      else {
        uVar21 = *puVar33;
      }
      uVar19 = uVar21 | bVar15 - 4 << (ulong)((uVar36 & 3) << 3);
      if (3 < uVar36) {
        uVar19 = uVar21;
      }
      uVar19 = uVar19 + 4;
    }
LAB_100723698:
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) {
        (**(code **)(lVar22 + 0x10))(puVar35,puVar33,lVar38);
        *(undefined1 *)((long)puVar35 + uVar2) = 0;
        bVar15 = 1;
        goto LAB_100723848;
      }
      (**(code **)(lVar23 + 0x10))(puVar35,puVar33,lVar11);
      uVar9 = *(undefined8 *)((ulong)(uVar1 + (long)puVar33) & 0xfffffffffffffff8);
      *(undefined8 *)(uVar1 + (long)puVar35 & 0xfffffffffffffff8) = uVar9;
      *(undefined1 *)((long)puVar35 + uVar2) = 1;
    }
    else if (uVar19 == 2) {
      uVar9 = *(undefined8 *)puVar33;
      *puVar35 = uVar9;
      *(undefined1 *)((long)puVar35 + uVar2) = 2;
    }
    else {
      *puVar35 = *(undefined8 *)puVar33;
      puVar35[1] = *(undefined8 *)(puVar33 + 2);
      uVar9 = *(undefined8 *)(puVar33 + 4);
      puVar35[2] = uVar9;
      *(undefined1 *)((long)puVar35 + uVar2) = 3;
      _swift_retain();
    }
    _swift_retain(uVar9);
    bVar15 = 1;
    goto LAB_100723848;
  }
  (**(code **)(lVar16 + 0x10))(param_1,param_2,lVar8);
  puVar35 = (undefined8 *)((ulong)(uVar3 + (long)param_1) & uVar27);
  puVar33 = (uint *)((ulong)(uVar3 + (long)param_2) & uVar27);
  bVar15 = *(byte *)((long)puVar33 + uVar2);
  uVar19 = (uint)bVar15;
  if (3 < bVar15) {
    uVar21 = 4;
    if (uVar36 < 4) {
      uVar21 = uVar36;
    }
    if ((int)uVar21 < 2) {
      if (uVar21 == 0) goto LAB_100723774;
      uVar21 = (uint)(byte)*puVar33;
    }
    else if (uVar21 == 2) {
      uVar21 = (uint)(ushort)*puVar33;
    }
    else if (uVar21 == 3) {
      uVar21 = (uint)(uint3)*puVar33;
    }
    else {
      uVar21 = *puVar33;
    }
    uVar19 = uVar21 | bVar15 - 4 << (ulong)((uVar36 & 3) << 3);
    if (3 < uVar36) {
      uVar19 = uVar21;
    }
    uVar19 = uVar19 + 4;
  }
LAB_100723774:
  if ((int)uVar19 < 2) {
    if (uVar19 != 0) {
      (**(code **)(lVar23 + 0x10))(puVar35,puVar33,lVar11);
      uVar9 = *(undefined8 *)((ulong)(uVar1 + (long)puVar33) & 0xfffffffffffffff8);
      *(undefined8 *)(uVar1 + (long)puVar35 & 0xfffffffffffffff8) = uVar9;
      *(undefined1 *)((long)puVar35 + uVar2) = 1;
      goto LAB_100723820;
    }
    (**(code **)(lVar22 + 0x10))(puVar35,puVar33,lVar38);
    *(undefined1 *)((long)puVar35 + uVar2) = 0;
  }
  else {
    if (uVar19 == 2) {
      uVar9 = *(undefined8 *)puVar33;
      *puVar35 = uVar9;
      *(undefined1 *)((long)puVar35 + uVar2) = 2;
    }
    else {
      *puVar35 = *(undefined8 *)puVar33;
      puVar35[1] = *(undefined8 *)(puVar33 + 2);
      uVar9 = *(undefined8 *)(puVar33 + 4);
      puVar35[2] = uVar9;
      *(undefined1 *)((long)puVar35 + uVar2) = 3;
      _swift_retain();
    }
LAB_100723820:
    _swift_retain(uVar9);
  }
  (**(code **)(lVar31 + 0x10))
            (lVar39 + (long)puVar35 & uVar18,(ulong)(lVar39 + (long)puVar33) & uVar18,lVar12);
  bVar15 = 2;
LAB_100723848:
  *(byte *)((long)param_1 + uVar5) = bVar15;
  return param_1;
}



/* Address: 0x100722f3c | FUN_100722f3c */

uint * FUN_100722f3c(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  byte bVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  code *pcVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  ulong uVar32;
  uint *puVar33;
  ulong uVar34;
  undefined8 *puVar35;
  uint uVar36;
  undefined8 uVar37;
  long lVar38;
  long lVar39;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  if (param_1 == param_2) {
    return param_1;
  }
  uVar28 = *(undefined8 *)(param_3 + 0x20);
  uVar30 = *(undefined8 *)(param_3 + 0x10);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar28,uVar30,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar16 = *(long *)(lVar8 + -8);
  lVar39 = *(long *)(lVar16 + 0x40);
  lVar38 = *(long *)(param_3 + 0x18);
  lVar22 = *(long *)(lVar38 + -8);
  bVar15 = *(byte *)(lVar22 + 0x50);
  uVar34 = (ulong)bVar15;
  uVar32 = lVar39 + uVar34;
  uVar27 = *(ulong *)(lVar22 + 0x40);
  uVar3 = (uVar32 & (uVar34 ^ 0xffffffffffffffff)) + uVar27;
  uVar37 = *(undefined8 *)(param_3 + 0x30);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar28,uVar30,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar37,uVar9,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar17 = *(long *)(lVar10 + -8);
  uVar25 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar4 = lVar39 + uVar25;
  lVar29 = *(long *)(lVar17 + 0x40);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar38,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,puVar6);
  lVar23 = *(long *)(lVar11 + -8);
  uVar26 = (ulong)((uint)bVar15 | *(uint *)(lVar23 + 0x50) & 0xf8 | 7);
  uVar1 = *(long *)(lVar23 + 0x40) + 7;
  uVar2 = (uVar1 & 0xfffffffffffffff8) + 8;
  if (uVar2 <= uVar27) {
    uVar2 = uVar27;
  }
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  uVar27 = uVar2 + 1 +
           (lVar29 + (uVar4 & (uVar25 ^ 0xffffffffffffffff)) + uVar26 &
           (uVar26 ^ 0xffffffffffffffff));
  if (uVar27 <= uVar3) {
    uVar27 = uVar3;
  }
  uVar3 = lVar39 + uVar26;
  lVar12 = 0;
  _swift_checkMetadataState(0,uVar9);
  lVar31 = *(long *)(lVar12 + -8);
  uVar18 = (ulong)*(byte *)(lVar31 + 0x50);
  lVar39 = uVar2 + 1 + uVar18;
  uVar5 = (lVar39 + (uVar3 & (uVar26 ^ 0xffffffffffffffff)) & (uVar18 ^ 0xffffffffffffffff)) +
          *(long *)(lVar31 + 0x40);
  if (uVar5 <= uVar27) {
    uVar5 = uVar27;
  }
  bVar15 = *(byte *)((long)param_1 + uVar5);
  uVar19 = (uint)bVar15;
  uVar21 = (uint)uVar5;
  if (2 < bVar15) {
    uVar36 = 4;
    if (uVar21 < 4) {
      uVar36 = uVar21;
    }
    if ((int)uVar36 < 2) {
      if (uVar36 == 0) goto LAB_100723190;
      uVar19 = (uint)(byte)*param_1;
    }
    else if (uVar36 == 2) {
      uVar19 = (uint)(ushort)*param_1;
    }
    else if (uVar36 == 3) {
      uVar19 = (uint)(uint3)*param_1;
    }
    else {
      uVar19 = *param_1;
    }
    if (uVar21 < 4) {
      uVar19 = uVar19 | bVar15 - 3 << (ulong)((uVar21 & 3) << 3);
    }
    uVar19 = uVar19 + 3;
  }
LAB_100723190:
  uVar34 = ~uVar34;
  uVar25 = ~uVar25;
  uVar27 = ~uVar26;
  uVar18 = ~uVar18;
  uVar36 = (uint)uVar2;
  if (uVar19 == 2) {
    (**(code **)(lVar16 + 8))(param_1,lVar8);
    puVar33 = (uint *)((ulong)(uVar3 + (long)param_1) & uVar27);
    bVar15 = *(byte *)((long)puVar33 + uVar2);
    uVar19 = (uint)bVar15;
    if (3 < bVar15) {
      uVar20 = 4;
      if (uVar36 < 4) {
        uVar20 = uVar36;
      }
      if ((int)uVar20 < 2) {
        if (uVar20 == 0) goto LAB_1007233b8;
        uVar20 = (uint)(byte)*puVar33;
      }
      else if (uVar20 == 2) {
        uVar20 = (uint)(ushort)*puVar33;
      }
      else if (uVar20 == 3) {
        uVar20 = (uint)(uint3)*puVar33;
      }
      else {
        uVar20 = *puVar33;
      }
      uVar19 = uVar20 | bVar15 - 4 << (ulong)((uVar36 & 3) << 3);
      if (3 < uVar36) {
        uVar19 = uVar20;
      }
      uVar19 = uVar19 + 4;
    }
LAB_1007233b8:
    if ((int)uVar19 < 2) {
      if (uVar19 != 0) {
        (**(code **)(lVar23 + 8))(puVar33,lVar11);
        uVar9 = *(undefined8 *)((ulong)(uVar1 + (long)puVar33) & 0xfffffffffffffff8);
        goto LAB_10072341c;
      }
      (**(code **)(lVar22 + 8))(puVar33,lVar38);
    }
    else {
      if (uVar19 == 2) {
        uVar9 = *(undefined8 *)puVar33;
      }
      else {
        _swift_release(*(undefined8 *)puVar33);
        uVar9 = *(undefined8 *)(puVar33 + 4);
      }
LAB_10072341c:
      _swift_release(uVar9);
    }
    pcVar24 = *(code **)(lVar31 + 8);
    uVar13 = (ulong)(lVar39 + (long)puVar33) & uVar18;
    lVar14 = lVar12;
LAB_100723438:
    (*pcVar24)(uVar13,lVar14);
  }
  else if (uVar19 == 1) {
    (**(code **)(lVar16 + 8))(param_1,lVar8);
    uVar13 = (ulong)(uVar4 + (long)param_1) & uVar25;
    (**(code **)(lVar17 + 8))(uVar13,lVar10);
    puVar33 = (uint *)(uVar13 + lVar29 + uVar26 & uVar27);
    bVar15 = *(byte *)((long)puVar33 + uVar2);
    uVar19 = (uint)bVar15;
    if (3 < bVar15) {
      uVar20 = 4;
      if (uVar36 < 4) {
        uVar20 = uVar36;
      }
      if ((int)uVar20 < 2) {
        if (uVar20 == 0) goto LAB_100723324;
        uVar20 = (uint)(byte)*puVar33;
      }
      else if (uVar20 == 2) {
        uVar20 = (uint)(ushort)*puVar33;
      }
      else if (uVar20 == 3) {
        uVar20 = (uint)(uint3)*puVar33;
      }
      else {
        uVar20 = *puVar33;
      }
      uVar19 = uVar20 | bVar15 - 4 << (ulong)((uVar36 & 3) << 3);
      if (3 < uVar36) {
        uVar19 = uVar20;
      }
      uVar19 = uVar19 + 4;
    }
LAB_100723324:
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) {
        (**(code **)(lVar22 + 8))(puVar33,lVar38);
        goto LAB_10072343c;
      }
      (**(code **)(lVar23 + 8))(puVar33,lVar11);
      uVar9 = *(undefined8 *)((ulong)(uVar1 + (long)puVar33) & 0xfffffffffffffff8);
    }
    else if (uVar19 == 2) {
      uVar9 = *(undefined8 *)puVar33;
    }
    else {
      _swift_release(*(undefined8 *)puVar33);
      uVar9 = *(undefined8 *)(puVar33 + 4);
    }
    _swift_release(uVar9);
  }
  else if (uVar19 == 0) {
    (**(code **)(lVar16 + 8))(param_1,lVar8);
    pcVar24 = *(code **)(lVar22 + 8);
    uVar13 = (ulong)(uVar32 + (long)param_1) & uVar34;
    lVar14 = lVar38;
    goto LAB_100723438;
  }
LAB_10072343c:
  bVar15 = *(byte *)((long)param_2 + uVar5);
  uVar19 = (uint)bVar15;
  if (2 < bVar15) {
    uVar20 = 4;
    if (uVar21 < 4) {
      uVar20 = uVar21;
    }
    if ((int)uVar20 < 2) {
      if (uVar20 == 0) goto joined_r0x0001007234ac;
      uVar19 = (uint)(byte)*param_2;
    }
    else if (uVar20 == 2) {
      uVar19 = (uint)(ushort)*param_2;
    }
    else if (uVar20 == 3) {
      uVar19 = (uint)(uint3)*param_2;
    }
    else {
      uVar19 = *param_2;
    }
    if (uVar21 < 4) {
      uVar19 = (uVar19 | bVar15 - 3 << (ulong)((uVar21 & 3) << 3)) + 3;
    }
    else {
      uVar19 = uVar19 + 3;
    }
  }
joined_r0x0001007234ac:
  if (uVar19 != 2) {
    if (uVar19 != 1) {
      if (uVar19 == 0) {
        (**(code **)(lVar16 + 0x10))(param_1,param_2,lVar8);
        (**(code **)(lVar22 + 0x10))
                  ((ulong)(uVar32 + (long)param_1) & uVar34,(ulong)(uVar32 + (long)param_2) & uVar34
                   ,lVar38);
        *(byte *)((long)param_1 + uVar5) = 0;
        return param_1;
      }
      puVar33 = _memcpy(param_1,param_2,uVar5 + 1);
      return puVar33;
    }
    (**(code **)(lVar16 + 0x10))(param_1,param_2,lVar8);
    uVar32 = (ulong)(uVar4 + (long)param_1) & uVar25;
    uVar25 = (ulong)(uVar4 + (long)param_2) & uVar25;
    (**(code **)(lVar17 + 0x10))(uVar32,uVar25,lVar10);
    puVar35 = (undefined8 *)(uVar32 + lVar29 + uVar26 & uVar27);
    puVar33 = (uint *)(uVar25 + lVar29 + uVar26 & uVar27);
    bVar15 = *(byte *)((long)puVar33 + uVar2);
    uVar19 = (uint)bVar15;
    if (3 < bVar15) {
      uVar21 = 4;
      if (uVar36 < 4) {
        uVar21 = uVar36;
      }
      if ((int)uVar21 < 2) {
        if (uVar21 == 0) goto LAB_100723698;
        uVar21 = (uint)(byte)*puVar33;
      }
      else if (uVar21 == 2) {
        uVar21 = (uint)(ushort)*puVar33;
      }
      else if (uVar21 == 3) {
        uVar21 = (uint)(uint3)*puVar33;
      }
      else {
        uVar21 = *puVar33;
      }
      uVar19 = uVar21 | bVar15 - 4 << (ulong)((uVar36 & 3) << 3);
      if (3 < uVar36) {
        uVar19 = uVar21;
      }
      uVar19 = uVar19 + 4;
    }
LAB_100723698:
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) {
        (**(code **)(lVar22 + 0x10))(puVar35,puVar33,lVar38);
        *(undefined1 *)((long)puVar35 + uVar2) = 0;
        bVar15 = 1;
        goto LAB_100723848;
      }
      (**(code **)(lVar23 + 0x10))(puVar35,puVar33,lVar11);
      uVar9 = *(undefined8 *)((ulong)(uVar1 + (long)puVar33) & 0xfffffffffffffff8);
      *(undefined8 *)(uVar1 + (long)puVar35 & 0xfffffffffffffff8) = uVar9;
      *(undefined1 *)((long)puVar35 + uVar2) = 1;
    }
    else if (uVar19 == 2) {
      uVar9 = *(undefined8 *)puVar33;
      *puVar35 = uVar9;
      *(undefined1 *)((long)puVar35 + uVar2) = 2;
    }
    else {
      *puVar35 = *(undefined8 *)puVar33;
      puVar35[1] = *(undefined8 *)(puVar33 + 2);
      uVar9 = *(undefined8 *)(puVar33 + 4);
      puVar35[2] = uVar9;
      *(undefined1 *)((long)puVar35 + uVar2) = 3;
      _swift_retain();
    }
    _swift_retain(uVar9);
    bVar15 = 1;
    goto LAB_100723848;
  }
  (**(code **)(lVar16 + 0x10))(param_1,param_2,lVar8);
  puVar35 = (undefined8 *)((ulong)(uVar3 + (long)param_1) & uVar27);
  puVar33 = (uint *)((ulong)(uVar3 + (long)param_2) & uVar27);
  bVar15 = *(byte *)((long)puVar33 + uVar2);
  uVar19 = (uint)bVar15;
  if (3 < bVar15) {
    uVar21 = 4;
    if (uVar36 < 4) {
      uVar21 = uVar36;
    }
    if ((int)uVar21 < 2) {
      if (uVar21 == 0) goto LAB_100723774;
      uVar21 = (uint)(byte)*puVar33;
    }
    else if (uVar21 == 2) {
      uVar21 = (uint)(ushort)*puVar33;
    }
    else if (uVar21 == 3) {
      uVar21 = (uint)(uint3)*puVar33;
    }
    else {
      uVar21 = *puVar33;
    }
    uVar19 = uVar21 | bVar15 - 4 << (ulong)((uVar36 & 3) << 3);
    if (3 < uVar36) {
      uVar19 = uVar21;
    }
    uVar19 = uVar19 + 4;
  }
LAB_100723774:
  if ((int)uVar19 < 2) {
    if (uVar19 != 0) {
      (**(code **)(lVar23 + 0x10))(puVar35,puVar33,lVar11);
      uVar9 = *(undefined8 *)((ulong)(uVar1 + (long)puVar33) & 0xfffffffffffffff8);
      *(undefined8 *)(uVar1 + (long)puVar35 & 0xfffffffffffffff8) = uVar9;
      *(undefined1 *)((long)puVar35 + uVar2) = 1;
      goto LAB_100723820;
    }
    (**(code **)(lVar22 + 0x10))(puVar35,puVar33,lVar38);
    *(undefined1 *)((long)puVar35 + uVar2) = 0;
  }
  else {
    if (uVar19 == 2) {
      uVar9 = *(undefined8 *)puVar33;
      *puVar35 = uVar9;
      *(undefined1 *)((long)puVar35 + uVar2) = 2;
    }
    else {
      *puVar35 = *(undefined8 *)puVar33;
      puVar35[1] = *(undefined8 *)(puVar33 + 2);
      uVar9 = *(undefined8 *)(puVar33 + 4);
      puVar35[2] = uVar9;
      *(undefined1 *)((long)puVar35 + uVar2) = 3;
      _swift_retain();
    }
LAB_100723820:
    _swift_retain(uVar9);
  }
  (**(code **)(lVar31 + 0x10))
            (lVar39 + (long)puVar35 & uVar18,(ulong)(lVar39 + (long)puVar33) & uVar18,lVar12);
  bVar15 = 2;
LAB_100723848:
  *(byte *)((long)param_1 + uVar5) = bVar15;
  return param_1;
}



/* Address: 0x100723870 | thunk_FUN_100723874 */

void * thunk_FUN_100723874(void *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  undefined1 uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  ulong uVar28;
  uint *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  undefined8 uVar36;
  long lVar37;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar30 = *(undefined8 *)(param_3 + 0x20);
  uVar31 = *(undefined8 *)(param_3 + 0x10);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar30,uVar31,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar15 = *(long *)(lVar8 + -8);
  lVar24 = *(long *)(lVar15 + 0x40);
  lVar23 = *(long *)(param_3 + 0x18);
  lVar19 = *(long *)(lVar23 + -8);
  bVar5 = *(byte *)(lVar19 + 0x50);
  uVar34 = (ulong)bVar5;
  uVar28 = lVar24 + uVar34;
  uVar27 = *(ulong *)(lVar19 + 0x40);
  uVar33 = (uVar28 & (uVar34 ^ 0xffffffffffffffff)) + uVar27;
  uVar36 = *(undefined8 *)(param_3 + 0x30);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar30,uVar31,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar36,uVar9,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar16 = *(long *)(lVar10 + -8);
  uVar21 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar3 = lVar24 + uVar21;
  lVar37 = *(long *)(lVar16 + 0x40);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar23,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,puVar6);
  lVar20 = *(long *)(lVar11 + -8);
  uVar35 = (ulong)((uint)bVar5 | *(uint *)(lVar20 + 0x50) & 0xf8 | 7);
  uVar1 = *(long *)(lVar20 + 0x40) + 7;
  uVar2 = (uVar1 & 0xfffffffffffffff8) + 8;
  if (uVar2 <= uVar27) {
    uVar2 = uVar27;
  }
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  uVar27 = uVar2 + 1 +
           (lVar37 + (uVar3 & (uVar21 ^ 0xffffffffffffffff)) + uVar35 &
           (uVar35 ^ 0xffffffffffffffff));
  if (uVar27 <= uVar33) {
    uVar27 = uVar33;
  }
  uVar33 = lVar24 + uVar35;
  lVar12 = 0;
  _swift_checkMetadataState(0,uVar9);
  lVar32 = *(long *)(lVar12 + -8);
  uVar25 = (ulong)*(byte *)(lVar32 + 0x50);
  lVar24 = uVar2 + 1 + uVar25;
  uVar4 = (lVar24 + (uVar33 & (uVar35 ^ 0xffffffffffffffff)) & (uVar25 ^ 0xffffffffffffffff)) +
          *(long *)(lVar32 + 0x40);
  if (uVar4 <= uVar27) {
    uVar4 = uVar27;
  }
  bVar5 = *(byte *)((long)param_2 + uVar4);
  uVar17 = (uint)bVar5;
  if (2 < bVar5) {
    uVar18 = (uint)uVar4;
    uVar22 = 4;
    if (uVar18 < 4) {
      uVar22 = uVar18;
    }
    if ((int)uVar22 < 2) {
      if (uVar22 == 0) goto LAB_100723aa4;
      uVar17 = (uint)(byte)*param_2;
    }
    else if (uVar22 == 2) {
      uVar17 = (uint)(ushort)*param_2;
    }
    else if (uVar22 == 3) {
      uVar17 = (uint)(uint3)*param_2;
    }
    else {
      uVar17 = *param_2;
    }
    if (uVar18 < 4) {
      uVar17 = (uVar17 | bVar5 - 3 << (ulong)((uVar18 & 3) << 3)) + 3;
    }
    else {
      uVar17 = uVar17 + 3;
    }
  }
LAB_100723aa4:
  uVar27 = ~uVar35;
  uVar22 = (uint)uVar2;
  if (uVar17 != 2) {
    if (uVar17 != 1) {
      if (uVar17 == 0) {
        (**(code **)(lVar15 + 0x20))(param_1,param_2,lVar8);
        (**(code **)(lVar19 + 0x20))
                  (uVar28 + (long)param_1 & ~uVar34,(ulong)(uVar28 + (long)param_2) & ~uVar34,lVar23
                  );
        *(undefined1 *)((long)param_1 + uVar4) = 0;
        return param_1;
      }
      pvVar13 = _memcpy(param_1,param_2,uVar4 + 1);
      return pvVar13;
    }
    (**(code **)(lVar15 + 0x20))(param_1,param_2,lVar8);
    uVar28 = uVar3 + (long)param_1 & ~uVar21;
    uVar33 = (ulong)(uVar3 + (long)param_2) & ~uVar21;
    (**(code **)(lVar16 + 0x20))(uVar28,uVar33,lVar10);
    puVar26 = (undefined8 *)(uVar28 + lVar37 + uVar35 & uVar27);
    puVar29 = (uint *)(uVar33 + lVar37 + uVar35 & uVar27);
    bVar5 = *(byte *)((long)puVar29 + uVar2);
    uVar17 = (uint)bVar5;
    if (3 < bVar5) {
      uVar18 = 4;
      if (uVar22 < 4) {
        uVar18 = uVar22;
      }
      if ((int)uVar18 < 2) {
        if (uVar18 == 0) goto LAB_100723c9c;
        uVar18 = (uint)(byte)*puVar29;
      }
      else if (uVar18 == 2) {
        uVar18 = (uint)(ushort)*puVar29;
      }
      else if (uVar18 == 3) {
        uVar18 = (uint)(uint3)*puVar29;
      }
      else {
        uVar18 = *puVar29;
      }
      uVar17 = uVar18 | bVar5 - 4 << (ulong)((uVar22 & 3) << 3);
      if (3 < uVar22) {
        uVar17 = uVar18;
      }
      uVar17 = uVar17 + 4;
    }
LAB_100723c9c:
    if ((int)uVar17 < 2) {
      if (uVar17 == 0) {
        (**(code **)(lVar19 + 0x20))(puVar26,puVar29,lVar23);
        uVar14 = 0;
      }
      else {
        (**(code **)(lVar20 + 0x20))(puVar26,puVar29,lVar11);
        *(undefined8 *)(uVar1 + (long)puVar26 & 0xfffffffffffffff8) =
             *(undefined8 *)((ulong)(uVar1 + (long)puVar29) & 0xfffffffffffffff8);
        uVar14 = 1;
      }
    }
    else if (uVar17 == 2) {
      *puVar26 = *(undefined8 *)puVar29;
      uVar14 = 2;
    }
    else {
      uVar30 = *(undefined8 *)(puVar29 + 2);
      uVar9 = *(undefined8 *)puVar29;
      puVar26[2] = *(undefined8 *)(puVar29 + 4);
      puVar26[1] = uVar30;
      *puVar26 = uVar9;
      uVar14 = 3;
    }
    *(undefined1 *)((long)puVar26 + uVar2) = uVar14;
    *(undefined1 *)((long)param_1 + uVar4) = 1;
    return param_1;
  }
  (**(code **)(lVar15 + 0x20))(param_1,param_2,lVar8);
  puVar26 = (undefined8 *)(uVar33 + (long)param_1 & uVar27);
  puVar29 = (uint *)((ulong)(uVar33 + (long)param_2) & uVar27);
  bVar5 = *(byte *)((long)puVar29 + uVar2);
  uVar17 = (uint)bVar5;
  if (3 < bVar5) {
    uVar18 = 4;
    if (uVar22 < 4) {
      uVar18 = uVar22;
    }
    if ((int)uVar18 < 2) {
      if (uVar18 == 0) goto LAB_100723d5c;
      uVar18 = (uint)(byte)*puVar29;
    }
    else if (uVar18 == 2) {
      uVar18 = (uint)(ushort)*puVar29;
    }
    else if (uVar18 == 3) {
      uVar18 = (uint)(uint3)*puVar29;
    }
    else {
      uVar18 = *puVar29;
    }
    uVar17 = uVar18 | bVar5 - 4 << (ulong)((uVar22 & 3) << 3);
    if (3 < uVar22) {
      uVar17 = uVar18;
    }
    uVar17 = uVar17 + 4;
  }
LAB_100723d5c:
  if ((int)uVar17 < 2) {
    if (uVar17 == 0) {
      (**(code **)(lVar19 + 0x20))(puVar26,puVar29,lVar23);
      uVar14 = 0;
    }
    else {
      (**(code **)(lVar20 + 0x20))(puVar26,puVar29,lVar11);
      *(undefined8 *)(uVar1 + (long)puVar26 & 0xfffffffffffffff8) =
           *(undefined8 *)((ulong)(uVar1 + (long)puVar29) & 0xfffffffffffffff8);
      uVar14 = 1;
    }
  }
  else if (uVar17 == 2) {
    *puVar26 = *(undefined8 *)puVar29;
    uVar14 = 2;
  }
  else {
    uVar30 = *(undefined8 *)(puVar29 + 2);
    uVar9 = *(undefined8 *)puVar29;
    puVar26[2] = *(undefined8 *)(puVar29 + 4);
    puVar26[1] = uVar30;
    *puVar26 = uVar9;
    uVar14 = 3;
  }
  *(undefined1 *)((long)puVar26 + uVar2) = uVar14;
  (**(code **)(lVar32 + 0x20))
            (lVar24 + (long)puVar26 & ~uVar25,(ulong)(lVar24 + (long)puVar29) & ~uVar25,lVar12);
  *(undefined1 *)((long)param_1 + uVar4) = 2;
  return param_1;
}



/* Address: 0x100723874 | FUN_100723874 */

void * FUN_100723874(void *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  undefined1 uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  ulong uVar28;
  uint *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  undefined8 uVar36;
  long lVar37;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar30 = *(undefined8 *)(param_3 + 0x20);
  uVar31 = *(undefined8 *)(param_3 + 0x10);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar30,uVar31,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar15 = *(long *)(lVar8 + -8);
  lVar24 = *(long *)(lVar15 + 0x40);
  lVar23 = *(long *)(param_3 + 0x18);
  lVar19 = *(long *)(lVar23 + -8);
  bVar5 = *(byte *)(lVar19 + 0x50);
  uVar34 = (ulong)bVar5;
  uVar28 = lVar24 + uVar34;
  uVar27 = *(ulong *)(lVar19 + 0x40);
  uVar33 = (uVar28 & (uVar34 ^ 0xffffffffffffffff)) + uVar27;
  uVar36 = *(undefined8 *)(param_3 + 0x30);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar30,uVar31,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar36,uVar9,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar16 = *(long *)(lVar10 + -8);
  uVar21 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar3 = lVar24 + uVar21;
  lVar37 = *(long *)(lVar16 + 0x40);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar23,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,puVar6);
  lVar20 = *(long *)(lVar11 + -8);
  uVar35 = (ulong)((uint)bVar5 | *(uint *)(lVar20 + 0x50) & 0xf8 | 7);
  uVar1 = *(long *)(lVar20 + 0x40) + 7;
  uVar2 = (uVar1 & 0xfffffffffffffff8) + 8;
  if (uVar2 <= uVar27) {
    uVar2 = uVar27;
  }
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  uVar27 = uVar2 + 1 +
           (lVar37 + (uVar3 & (uVar21 ^ 0xffffffffffffffff)) + uVar35 &
           (uVar35 ^ 0xffffffffffffffff));
  if (uVar27 <= uVar33) {
    uVar27 = uVar33;
  }
  uVar33 = lVar24 + uVar35;
  lVar12 = 0;
  _swift_checkMetadataState(0,uVar9);
  lVar32 = *(long *)(lVar12 + -8);
  uVar25 = (ulong)*(byte *)(lVar32 + 0x50);
  lVar24 = uVar2 + 1 + uVar25;
  uVar4 = (lVar24 + (uVar33 & (uVar35 ^ 0xffffffffffffffff)) & (uVar25 ^ 0xffffffffffffffff)) +
          *(long *)(lVar32 + 0x40);
  if (uVar4 <= uVar27) {
    uVar4 = uVar27;
  }
  bVar5 = *(byte *)((long)param_2 + uVar4);
  uVar17 = (uint)bVar5;
  if (2 < bVar5) {
    uVar18 = (uint)uVar4;
    uVar22 = 4;
    if (uVar18 < 4) {
      uVar22 = uVar18;
    }
    if ((int)uVar22 < 2) {
      if (uVar22 == 0) goto LAB_100723aa4;
      uVar17 = (uint)(byte)*param_2;
    }
    else if (uVar22 == 2) {
      uVar17 = (uint)(ushort)*param_2;
    }
    else if (uVar22 == 3) {
      uVar17 = (uint)(uint3)*param_2;
    }
    else {
      uVar17 = *param_2;
    }
    if (uVar18 < 4) {
      uVar17 = (uVar17 | bVar5 - 3 << (ulong)((uVar18 & 3) << 3)) + 3;
    }
    else {
      uVar17 = uVar17 + 3;
    }
  }
LAB_100723aa4:
  uVar27 = ~uVar35;
  uVar22 = (uint)uVar2;
  if (uVar17 != 2) {
    if (uVar17 != 1) {
      if (uVar17 == 0) {
        (**(code **)(lVar15 + 0x20))(param_1,param_2,lVar8);
        (**(code **)(lVar19 + 0x20))
                  (uVar28 + (long)param_1 & ~uVar34,(ulong)(uVar28 + (long)param_2) & ~uVar34,lVar23
                  );
        *(undefined1 *)((long)param_1 + uVar4) = 0;
        return param_1;
      }
      pvVar13 = _memcpy(param_1,param_2,uVar4 + 1);
      return pvVar13;
    }
    (**(code **)(lVar15 + 0x20))(param_1,param_2,lVar8);
    uVar28 = uVar3 + (long)param_1 & ~uVar21;
    uVar33 = (ulong)(uVar3 + (long)param_2) & ~uVar21;
    (**(code **)(lVar16 + 0x20))(uVar28,uVar33,lVar10);
    puVar26 = (undefined8 *)(uVar28 + lVar37 + uVar35 & uVar27);
    puVar29 = (uint *)(uVar33 + lVar37 + uVar35 & uVar27);
    bVar5 = *(byte *)((long)puVar29 + uVar2);
    uVar17 = (uint)bVar5;
    if (3 < bVar5) {
      uVar18 = 4;
      if (uVar22 < 4) {
        uVar18 = uVar22;
      }
      if ((int)uVar18 < 2) {
        if (uVar18 == 0) goto LAB_100723c9c;
        uVar18 = (uint)(byte)*puVar29;
      }
      else if (uVar18 == 2) {
        uVar18 = (uint)(ushort)*puVar29;
      }
      else if (uVar18 == 3) {
        uVar18 = (uint)(uint3)*puVar29;
      }
      else {
        uVar18 = *puVar29;
      }
      uVar17 = uVar18 | bVar5 - 4 << (ulong)((uVar22 & 3) << 3);
      if (3 < uVar22) {
        uVar17 = uVar18;
      }
      uVar17 = uVar17 + 4;
    }
LAB_100723c9c:
    if ((int)uVar17 < 2) {
      if (uVar17 == 0) {
        (**(code **)(lVar19 + 0x20))(puVar26,puVar29,lVar23);
        uVar14 = 0;
      }
      else {
        (**(code **)(lVar20 + 0x20))(puVar26,puVar29,lVar11);
        *(undefined8 *)(uVar1 + (long)puVar26 & 0xfffffffffffffff8) =
             *(undefined8 *)((ulong)(uVar1 + (long)puVar29) & 0xfffffffffffffff8);
        uVar14 = 1;
      }
    }
    else if (uVar17 == 2) {
      *puVar26 = *(undefined8 *)puVar29;
      uVar14 = 2;
    }
    else {
      uVar30 = *(undefined8 *)(puVar29 + 2);
      uVar9 = *(undefined8 *)puVar29;
      puVar26[2] = *(undefined8 *)(puVar29 + 4);
      puVar26[1] = uVar30;
      *puVar26 = uVar9;
      uVar14 = 3;
    }
    *(undefined1 *)((long)puVar26 + uVar2) = uVar14;
    *(undefined1 *)((long)param_1 + uVar4) = 1;
    return param_1;
  }
  (**(code **)(lVar15 + 0x20))(param_1,param_2,lVar8);
  puVar26 = (undefined8 *)(uVar33 + (long)param_1 & uVar27);
  puVar29 = (uint *)((ulong)(uVar33 + (long)param_2) & uVar27);
  bVar5 = *(byte *)((long)puVar29 + uVar2);
  uVar17 = (uint)bVar5;
  if (3 < bVar5) {
    uVar18 = 4;
    if (uVar22 < 4) {
      uVar18 = uVar22;
    }
    if ((int)uVar18 < 2) {
      if (uVar18 == 0) goto LAB_100723d5c;
      uVar18 = (uint)(byte)*puVar29;
    }
    else if (uVar18 == 2) {
      uVar18 = (uint)(ushort)*puVar29;
    }
    else if (uVar18 == 3) {
      uVar18 = (uint)(uint3)*puVar29;
    }
    else {
      uVar18 = *puVar29;
    }
    uVar17 = uVar18 | bVar5 - 4 << (ulong)((uVar22 & 3) << 3);
    if (3 < uVar22) {
      uVar17 = uVar18;
    }
    uVar17 = uVar17 + 4;
  }
LAB_100723d5c:
  if ((int)uVar17 < 2) {
    if (uVar17 == 0) {
      (**(code **)(lVar19 + 0x20))(puVar26,puVar29,lVar23);
      uVar14 = 0;
    }
    else {
      (**(code **)(lVar20 + 0x20))(puVar26,puVar29,lVar11);
      *(undefined8 *)(uVar1 + (long)puVar26 & 0xfffffffffffffff8) =
           *(undefined8 *)((ulong)(uVar1 + (long)puVar29) & 0xfffffffffffffff8);
      uVar14 = 1;
    }
  }
  else if (uVar17 == 2) {
    *puVar26 = *(undefined8 *)puVar29;
    uVar14 = 2;
  }
  else {
    uVar30 = *(undefined8 *)(puVar29 + 2);
    uVar9 = *(undefined8 *)puVar29;
    puVar26[2] = *(undefined8 *)(puVar29 + 4);
    puVar26[1] = uVar30;
    *puVar26 = uVar9;
    uVar14 = 3;
  }
  *(undefined1 *)((long)puVar26 + uVar2) = uVar14;
  (**(code **)(lVar32 + 0x20))
            (lVar24 + (long)puVar26 & ~uVar25,(ulong)(lVar24 + (long)puVar29) & ~uVar25,lVar12);
  *(undefined1 *)((long)param_1 + uVar4) = 2;
  return param_1;
}



/* Address: 0x100723e40 | thunk_FUN_100723e44 */

uint * thunk_FUN_100723e44(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 uVar15;
  byte bVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  code *pcVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  ulong uVar34;
  uint *puVar35;
  ulong uVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  if (param_1 == param_2) {
    return param_1;
  }
  uVar30 = *(undefined8 *)(param_3 + 0x20);
  uVar32 = *(undefined8 *)(param_3 + 0x10);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar30,uVar32,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar17 = *(long *)(lVar8 + -8);
  lVar40 = *(long *)(lVar17 + 0x40);
  lVar39 = *(long *)(param_3 + 0x18);
  lVar23 = *(long *)(lVar39 + -8);
  bVar16 = *(byte *)(lVar23 + 0x50);
  uVar36 = (ulong)bVar16;
  uVar34 = lVar40 + uVar36;
  uVar29 = *(ulong *)(lVar23 + 0x40);
  uVar3 = (uVar34 & (uVar36 ^ 0xffffffffffffffff)) + uVar29;
  uVar38 = *(undefined8 *)(param_3 + 0x30);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar30,uVar32,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar38,uVar9,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar18 = *(long *)(lVar10 + -8);
  uVar26 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar4 = lVar40 + uVar26;
  lVar31 = *(long *)(lVar18 + 0x40);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar39,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,puVar6);
  lVar24 = *(long *)(lVar11 + -8);
  uVar27 = (ulong)((uint)bVar16 | *(uint *)(lVar24 + 0x50) & 0xf8 | 7);
  uVar1 = *(long *)(lVar24 + 0x40) + 7;
  uVar2 = (uVar1 & 0xfffffffffffffff8) + 8;
  if (uVar2 <= uVar29) {
    uVar2 = uVar29;
  }
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  uVar29 = uVar2 + 1 +
           (lVar31 + (uVar4 & (uVar26 ^ 0xffffffffffffffff)) + uVar27 &
           (uVar27 ^ 0xffffffffffffffff));
  if (uVar29 <= uVar3) {
    uVar29 = uVar3;
  }
  uVar3 = lVar40 + uVar27;
  lVar12 = 0;
  _swift_checkMetadataState(0,uVar9);
  lVar33 = *(long *)(lVar12 + -8);
  uVar19 = (ulong)*(byte *)(lVar33 + 0x50);
  lVar40 = uVar2 + 1 + uVar19;
  uVar5 = (lVar40 + (uVar3 & (uVar27 ^ 0xffffffffffffffff)) & (uVar19 ^ 0xffffffffffffffff)) +
          *(long *)(lVar33 + 0x40);
  if (uVar5 <= uVar29) {
    uVar5 = uVar29;
  }
  bVar16 = *(byte *)((long)param_1 + uVar5);
  uVar20 = (uint)bVar16;
  uVar22 = (uint)uVar5;
  if (2 < bVar16) {
    uVar28 = 4;
    if (uVar22 < 4) {
      uVar28 = uVar22;
    }
    if ((int)uVar28 < 2) {
      if (uVar28 == 0) goto LAB_100724098;
      uVar20 = (uint)(byte)*param_1;
    }
    else if (uVar28 == 2) {
      uVar20 = (uint)(ushort)*param_1;
    }
    else if (uVar28 == 3) {
      uVar20 = (uint)(uint3)*param_1;
    }
    else {
      uVar20 = *param_1;
    }
    if (uVar22 < 4) {
      uVar20 = uVar20 | bVar16 - 3 << (ulong)((uVar22 & 3) << 3);
    }
    uVar20 = uVar20 + 3;
  }
LAB_100724098:
  uVar36 = ~uVar36;
  uVar26 = ~uVar26;
  uVar29 = ~uVar27;
  uVar19 = ~uVar19;
  uVar28 = (uint)uVar2;
  if (uVar20 == 2) {
    (**(code **)(lVar17 + 8))(param_1,lVar8);
    puVar35 = (uint *)((ulong)(uVar3 + (long)param_1) & uVar29);
    bVar16 = *(byte *)((long)puVar35 + uVar2);
    uVar20 = (uint)bVar16;
    if (3 < bVar16) {
      uVar21 = 4;
      if (uVar28 < 4) {
        uVar21 = uVar28;
      }
      if ((int)uVar21 < 2) {
        if (uVar21 == 0) goto LAB_1007242c0;
        uVar21 = (uint)(byte)*puVar35;
      }
      else if (uVar21 == 2) {
        uVar21 = (uint)(ushort)*puVar35;
      }
      else if (uVar21 == 3) {
        uVar21 = (uint)(uint3)*puVar35;
      }
      else {
        uVar21 = *puVar35;
      }
      uVar20 = uVar21 | bVar16 - 4 << (ulong)((uVar28 & 3) << 3);
      if (3 < uVar28) {
        uVar20 = uVar21;
      }
      uVar20 = uVar20 + 4;
    }
LAB_1007242c0:
    if ((int)uVar20 < 2) {
      if (uVar20 != 0) {
        (**(code **)(lVar24 + 8))(puVar35,lVar11);
        uVar9 = *(undefined8 *)((ulong)(uVar1 + (long)puVar35) & 0xfffffffffffffff8);
        goto LAB_100724324;
      }
      (**(code **)(lVar23 + 8))(puVar35,lVar39);
    }
    else {
      if (uVar20 == 2) {
        uVar9 = *(undefined8 *)puVar35;
      }
      else {
        _swift_release(*(undefined8 *)puVar35);
        uVar9 = *(undefined8 *)(puVar35 + 4);
      }
LAB_100724324:
      _swift_release(uVar9);
    }
    pcVar25 = *(code **)(lVar33 + 8);
    uVar13 = (ulong)(lVar40 + (long)puVar35) & uVar19;
    lVar14 = lVar12;
LAB_100724340:
    (*pcVar25)(uVar13,lVar14);
  }
  else if (uVar20 == 1) {
    (**(code **)(lVar17 + 8))(param_1,lVar8);
    uVar13 = (ulong)(uVar4 + (long)param_1) & uVar26;
    (**(code **)(lVar18 + 8))(uVar13,lVar10);
    puVar35 = (uint *)(uVar13 + lVar31 + uVar27 & uVar29);
    bVar16 = *(byte *)((long)puVar35 + uVar2);
    uVar20 = (uint)bVar16;
    if (3 < bVar16) {
      uVar21 = 4;
      if (uVar28 < 4) {
        uVar21 = uVar28;
      }
      if ((int)uVar21 < 2) {
        if (uVar21 == 0) goto LAB_10072422c;
        uVar21 = (uint)(byte)*puVar35;
      }
      else if (uVar21 == 2) {
        uVar21 = (uint)(ushort)*puVar35;
      }
      else if (uVar21 == 3) {
        uVar21 = (uint)(uint3)*puVar35;
      }
      else {
        uVar21 = *puVar35;
      }
      uVar20 = uVar21 | bVar16 - 4 << (ulong)((uVar28 & 3) << 3);
      if (3 < uVar28) {
        uVar20 = uVar21;
      }
      uVar20 = uVar20 + 4;
    }
LAB_10072422c:
    if ((int)uVar20 < 2) {
      if (uVar20 == 0) {
        (**(code **)(lVar23 + 8))(puVar35,lVar39);
        goto LAB_100724344;
      }
      (**(code **)(lVar24 + 8))(puVar35,lVar11);
      uVar9 = *(undefined8 *)((ulong)(uVar1 + (long)puVar35) & 0xfffffffffffffff8);
    }
    else if (uVar20 == 2) {
      uVar9 = *(undefined8 *)puVar35;
    }
    else {
      _swift_release(*(undefined8 *)puVar35);
      uVar9 = *(undefined8 *)(puVar35 + 4);
    }
    _swift_release(uVar9);
  }
  else if (uVar20 == 0) {
    (**(code **)(lVar17 + 8))(param_1,lVar8);
    pcVar25 = *(code **)(lVar23 + 8);
    uVar13 = (ulong)(uVar34 + (long)param_1) & uVar36;
    lVar14 = lVar39;
    goto LAB_100724340;
  }
LAB_100724344:
  bVar16 = *(byte *)((long)param_2 + uVar5);
  uVar20 = (uint)bVar16;
  if (2 < bVar16) {
    uVar21 = 4;
    if (uVar22 < 4) {
      uVar21 = uVar22;
    }
    if ((int)uVar21 < 2) {
      if (uVar21 == 0) goto joined_r0x0001007243b4;
      uVar20 = (uint)(byte)*param_2;
    }
    else if (uVar21 == 2) {
      uVar20 = (uint)(ushort)*param_2;
    }
    else if (uVar21 == 3) {
      uVar20 = (uint)(uint3)*param_2;
    }
    else {
      uVar20 = *param_2;
    }
    if (uVar22 < 4) {
      uVar20 = (uVar20 | bVar16 - 3 << (ulong)((uVar22 & 3) << 3)) + 3;
    }
    else {
      uVar20 = uVar20 + 3;
    }
  }
joined_r0x0001007243b4:
  if (uVar20 != 2) {
    if (uVar20 != 1) {
      if (uVar20 == 0) {
        (**(code **)(lVar17 + 0x20))(param_1,param_2,lVar8);
        (**(code **)(lVar23 + 0x20))
                  ((ulong)(uVar34 + (long)param_1) & uVar36,(ulong)(uVar34 + (long)param_2) & uVar36
                   ,lVar39);
        *(byte *)((long)param_1 + uVar5) = 0;
        return param_1;
      }
      puVar35 = _memcpy(param_1,param_2,uVar5 + 1);
      return puVar35;
    }
    (**(code **)(lVar17 + 0x20))(param_1,param_2,lVar8);
    uVar34 = (ulong)(uVar4 + (long)param_1) & uVar26;
    uVar26 = (ulong)(uVar4 + (long)param_2) & uVar26;
    (**(code **)(lVar18 + 0x20))(uVar34,uVar26,lVar10);
    puVar37 = (undefined8 *)(uVar34 + lVar31 + uVar27 & uVar29);
    puVar35 = (uint *)(uVar26 + lVar31 + uVar27 & uVar29);
    bVar16 = *(byte *)((long)puVar35 + uVar2);
    uVar20 = (uint)bVar16;
    if (3 < bVar16) {
      uVar22 = 4;
      if (uVar28 < 4) {
        uVar22 = uVar28;
      }
      if ((int)uVar22 < 2) {
        if (uVar22 == 0) goto LAB_1007245a0;
        uVar22 = (uint)(byte)*puVar35;
      }
      else if (uVar22 == 2) {
        uVar22 = (uint)(ushort)*puVar35;
      }
      else if (uVar22 == 3) {
        uVar22 = (uint)(uint3)*puVar35;
      }
      else {
        uVar22 = *puVar35;
      }
      uVar20 = uVar22 | bVar16 - 4 << (ulong)((uVar28 & 3) << 3);
      if (3 < uVar28) {
        uVar20 = uVar22;
      }
      uVar20 = uVar20 + 4;
    }
LAB_1007245a0:
    if ((int)uVar20 < 2) {
      if (uVar20 == 0) {
        (**(code **)(lVar23 + 0x20))(puVar37,puVar35,lVar39);
        uVar15 = 0;
      }
      else {
        (**(code **)(lVar24 + 0x20))(puVar37,puVar35,lVar11);
        *(undefined8 *)(uVar1 + (long)puVar37 & 0xfffffffffffffff8) =
             *(undefined8 *)((ulong)(uVar1 + (long)puVar35) & 0xfffffffffffffff8);
        uVar15 = 1;
      }
    }
    else if (uVar20 == 2) {
      *puVar37 = *(undefined8 *)puVar35;
      uVar15 = 2;
    }
    else {
      uVar30 = *(undefined8 *)(puVar35 + 2);
      uVar9 = *(undefined8 *)puVar35;
      puVar37[2] = *(undefined8 *)(puVar35 + 4);
      puVar37[1] = uVar30;
      *puVar37 = uVar9;
      uVar15 = 3;
    }
    *(undefined1 *)((long)puVar37 + uVar2) = uVar15;
    bVar16 = 1;
    goto LAB_100724714;
  }
  (**(code **)(lVar17 + 0x20))(param_1,param_2,lVar8);
  puVar37 = (undefined8 *)((ulong)(uVar3 + (long)param_1) & uVar29);
  puVar35 = (uint *)((ulong)(uVar3 + (long)param_2) & uVar29);
  bVar16 = *(byte *)((long)puVar35 + uVar2);
  uVar20 = (uint)bVar16;
  if (3 < bVar16) {
    uVar22 = 4;
    if (uVar28 < 4) {
      uVar22 = uVar28;
    }
    if ((int)uVar22 < 2) {
      if (uVar22 == 0) goto LAB_10072465c;
      uVar22 = (uint)(byte)*puVar35;
    }
    else if (uVar22 == 2) {
      uVar22 = (uint)(ushort)*puVar35;
    }
    else if (uVar22 == 3) {
      uVar22 = (uint)(uint3)*puVar35;
    }
    else {
      uVar22 = *puVar35;
    }
    uVar20 = uVar22 | bVar16 - 4 << (ulong)((uVar28 & 3) << 3);
    if (3 < uVar28) {
      uVar20 = uVar22;
    }
    uVar20 = uVar20 + 4;
  }
LAB_10072465c:
  if ((int)uVar20 < 2) {
    if (uVar20 == 0) {
      (**(code **)(lVar23 + 0x20))(puVar37,puVar35,lVar39);
      uVar15 = 0;
    }
    else {
      (**(code **)(lVar24 + 0x20))(puVar37,puVar35,lVar11);
      *(undefined8 *)(uVar1 + (long)puVar37 & 0xfffffffffffffff8) =
           *(undefined8 *)((ulong)(uVar1 + (long)puVar35) & 0xfffffffffffffff8);
      uVar15 = 1;
    }
  }
  else if (uVar20 == 2) {
    *puVar37 = *(undefined8 *)puVar35;
    uVar15 = 2;
  }
  else {
    uVar30 = *(undefined8 *)(puVar35 + 2);
    uVar9 = *(undefined8 *)puVar35;
    puVar37[2] = *(undefined8 *)(puVar35 + 4);
    puVar37[1] = uVar30;
    *puVar37 = uVar9;
    uVar15 = 3;
  }
  *(undefined1 *)((long)puVar37 + uVar2) = uVar15;
  (**(code **)(lVar33 + 0x20))
            (lVar40 + (long)puVar37 & uVar19,(ulong)(lVar40 + (long)puVar35) & uVar19,lVar12);
  bVar16 = 2;
LAB_100724714:
  *(byte *)((long)param_1 + uVar5) = bVar16;
  return param_1;
}



/* Address: 0x100723e44 | FUN_100723e44 */

uint * FUN_100723e44(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 uVar15;
  byte bVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  code *pcVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  ulong uVar34;
  uint *puVar35;
  ulong uVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  if (param_1 == param_2) {
    return param_1;
  }
  uVar30 = *(undefined8 *)(param_3 + 0x20);
  uVar32 = *(undefined8 *)(param_3 + 0x10);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar30,uVar32,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar17 = *(long *)(lVar8 + -8);
  lVar40 = *(long *)(lVar17 + 0x40);
  lVar39 = *(long *)(param_3 + 0x18);
  lVar23 = *(long *)(lVar39 + -8);
  bVar16 = *(byte *)(lVar23 + 0x50);
  uVar36 = (ulong)bVar16;
  uVar34 = lVar40 + uVar36;
  uVar29 = *(ulong *)(lVar23 + 0x40);
  uVar3 = (uVar34 & (uVar36 ^ 0xffffffffffffffff)) + uVar29;
  uVar38 = *(undefined8 *)(param_3 + 0x30);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar30,uVar32,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar38,uVar9,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar18 = *(long *)(lVar10 + -8);
  uVar26 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar4 = lVar40 + uVar26;
  lVar31 = *(long *)(lVar18 + 0x40);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar39,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,puVar6);
  lVar24 = *(long *)(lVar11 + -8);
  uVar27 = (ulong)((uint)bVar16 | *(uint *)(lVar24 + 0x50) & 0xf8 | 7);
  uVar1 = *(long *)(lVar24 + 0x40) + 7;
  uVar2 = (uVar1 & 0xfffffffffffffff8) + 8;
  if (uVar2 <= uVar29) {
    uVar2 = uVar29;
  }
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  uVar29 = uVar2 + 1 +
           (lVar31 + (uVar4 & (uVar26 ^ 0xffffffffffffffff)) + uVar27 &
           (uVar27 ^ 0xffffffffffffffff));
  if (uVar29 <= uVar3) {
    uVar29 = uVar3;
  }
  uVar3 = lVar40 + uVar27;
  lVar12 = 0;
  _swift_checkMetadataState(0,uVar9);
  lVar33 = *(long *)(lVar12 + -8);
  uVar19 = (ulong)*(byte *)(lVar33 + 0x50);
  lVar40 = uVar2 + 1 + uVar19;
  uVar5 = (lVar40 + (uVar3 & (uVar27 ^ 0xffffffffffffffff)) & (uVar19 ^ 0xffffffffffffffff)) +
          *(long *)(lVar33 + 0x40);
  if (uVar5 <= uVar29) {
    uVar5 = uVar29;
  }
  bVar16 = *(byte *)((long)param_1 + uVar5);
  uVar20 = (uint)bVar16;
  uVar22 = (uint)uVar5;
  if (2 < bVar16) {
    uVar28 = 4;
    if (uVar22 < 4) {
      uVar28 = uVar22;
    }
    if ((int)uVar28 < 2) {
      if (uVar28 == 0) goto LAB_100724098;
      uVar20 = (uint)(byte)*param_1;
    }
    else if (uVar28 == 2) {
      uVar20 = (uint)(ushort)*param_1;
    }
    else if (uVar28 == 3) {
      uVar20 = (uint)(uint3)*param_1;
    }
    else {
      uVar20 = *param_1;
    }
    if (uVar22 < 4) {
      uVar20 = uVar20 | bVar16 - 3 << (ulong)((uVar22 & 3) << 3);
    }
    uVar20 = uVar20 + 3;
  }
LAB_100724098:
  uVar36 = ~uVar36;
  uVar26 = ~uVar26;
  uVar29 = ~uVar27;
  uVar19 = ~uVar19;
  uVar28 = (uint)uVar2;
  if (uVar20 == 2) {
    (**(code **)(lVar17 + 8))(param_1,lVar8);
    puVar35 = (uint *)((ulong)(uVar3 + (long)param_1) & uVar29);
    bVar16 = *(byte *)((long)puVar35 + uVar2);
    uVar20 = (uint)bVar16;
    if (3 < bVar16) {
      uVar21 = 4;
      if (uVar28 < 4) {
        uVar21 = uVar28;
      }
      if ((int)uVar21 < 2) {
        if (uVar21 == 0) goto LAB_1007242c0;
        uVar21 = (uint)(byte)*puVar35;
      }
      else if (uVar21 == 2) {
        uVar21 = (uint)(ushort)*puVar35;
      }
      else if (uVar21 == 3) {
        uVar21 = (uint)(uint3)*puVar35;
      }
      else {
        uVar21 = *puVar35;
      }
      uVar20 = uVar21 | bVar16 - 4 << (ulong)((uVar28 & 3) << 3);
      if (3 < uVar28) {
        uVar20 = uVar21;
      }
      uVar20 = uVar20 + 4;
    }
LAB_1007242c0:
    if ((int)uVar20 < 2) {
      if (uVar20 != 0) {
        (**(code **)(lVar24 + 8))(puVar35,lVar11);
        uVar9 = *(undefined8 *)((ulong)(uVar1 + (long)puVar35) & 0xfffffffffffffff8);
        goto LAB_100724324;
      }
      (**(code **)(lVar23 + 8))(puVar35,lVar39);
    }
    else {
      if (uVar20 == 2) {
        uVar9 = *(undefined8 *)puVar35;
      }
      else {
        _swift_release(*(undefined8 *)puVar35);
        uVar9 = *(undefined8 *)(puVar35 + 4);
      }
LAB_100724324:
      _swift_release(uVar9);
    }
    pcVar25 = *(code **)(lVar33 + 8);
    uVar13 = (ulong)(lVar40 + (long)puVar35) & uVar19;
    lVar14 = lVar12;
LAB_100724340:
    (*pcVar25)(uVar13,lVar14);
  }
  else if (uVar20 == 1) {
    (**(code **)(lVar17 + 8))(param_1,lVar8);
    uVar13 = (ulong)(uVar4 + (long)param_1) & uVar26;
    (**(code **)(lVar18 + 8))(uVar13,lVar10);
    puVar35 = (uint *)(uVar13 + lVar31 + uVar27 & uVar29);
    bVar16 = *(byte *)((long)puVar35 + uVar2);
    uVar20 = (uint)bVar16;
    if (3 < bVar16) {
      uVar21 = 4;
      if (uVar28 < 4) {
        uVar21 = uVar28;
      }
      if ((int)uVar21 < 2) {
        if (uVar21 == 0) goto LAB_10072422c;
        uVar21 = (uint)(byte)*puVar35;
      }
      else if (uVar21 == 2) {
        uVar21 = (uint)(ushort)*puVar35;
      }
      else if (uVar21 == 3) {
        uVar21 = (uint)(uint3)*puVar35;
      }
      else {
        uVar21 = *puVar35;
      }
      uVar20 = uVar21 | bVar16 - 4 << (ulong)((uVar28 & 3) << 3);
      if (3 < uVar28) {
        uVar20 = uVar21;
      }
      uVar20 = uVar20 + 4;
    }
LAB_10072422c:
    if ((int)uVar20 < 2) {
      if (uVar20 == 0) {
        (**(code **)(lVar23 + 8))(puVar35,lVar39);
        goto LAB_100724344;
      }
      (**(code **)(lVar24 + 8))(puVar35,lVar11);
      uVar9 = *(undefined8 *)((ulong)(uVar1 + (long)puVar35) & 0xfffffffffffffff8);
    }
    else if (uVar20 == 2) {
      uVar9 = *(undefined8 *)puVar35;
    }
    else {
      _swift_release(*(undefined8 *)puVar35);
      uVar9 = *(undefined8 *)(puVar35 + 4);
    }
    _swift_release(uVar9);
  }
  else if (uVar20 == 0) {
    (**(code **)(lVar17 + 8))(param_1,lVar8);
    pcVar25 = *(code **)(lVar23 + 8);
    uVar13 = (ulong)(uVar34 + (long)param_1) & uVar36;
    lVar14 = lVar39;
    goto LAB_100724340;
  }
LAB_100724344:
  bVar16 = *(byte *)((long)param_2 + uVar5);
  uVar20 = (uint)bVar16;
  if (2 < bVar16) {
    uVar21 = 4;
    if (uVar22 < 4) {
      uVar21 = uVar22;
    }
    if ((int)uVar21 < 2) {
      if (uVar21 == 0) goto joined_r0x0001007243b4;
      uVar20 = (uint)(byte)*param_2;
    }
    else if (uVar21 == 2) {
      uVar20 = (uint)(ushort)*param_2;
    }
    else if (uVar21 == 3) {
      uVar20 = (uint)(uint3)*param_2;
    }
    else {
      uVar20 = *param_2;
    }
    if (uVar22 < 4) {
      uVar20 = (uVar20 | bVar16 - 3 << (ulong)((uVar22 & 3) << 3)) + 3;
    }
    else {
      uVar20 = uVar20 + 3;
    }
  }
joined_r0x0001007243b4:
  if (uVar20 != 2) {
    if (uVar20 != 1) {
      if (uVar20 == 0) {
        (**(code **)(lVar17 + 0x20))(param_1,param_2,lVar8);
        (**(code **)(lVar23 + 0x20))
                  ((ulong)(uVar34 + (long)param_1) & uVar36,(ulong)(uVar34 + (long)param_2) & uVar36
                   ,lVar39);
        *(byte *)((long)param_1 + uVar5) = 0;
        return param_1;
      }
      puVar35 = _memcpy(param_1,param_2,uVar5 + 1);
      return puVar35;
    }
    (**(code **)(lVar17 + 0x20))(param_1,param_2,lVar8);
    uVar34 = (ulong)(uVar4 + (long)param_1) & uVar26;
    uVar26 = (ulong)(uVar4 + (long)param_2) & uVar26;
    (**(code **)(lVar18 + 0x20))(uVar34,uVar26,lVar10);
    puVar37 = (undefined8 *)(uVar34 + lVar31 + uVar27 & uVar29);
    puVar35 = (uint *)(uVar26 + lVar31 + uVar27 & uVar29);
    bVar16 = *(byte *)((long)puVar35 + uVar2);
    uVar20 = (uint)bVar16;
    if (3 < bVar16) {
      uVar22 = 4;
      if (uVar28 < 4) {
        uVar22 = uVar28;
      }
      if ((int)uVar22 < 2) {
        if (uVar22 == 0) goto LAB_1007245a0;
        uVar22 = (uint)(byte)*puVar35;
      }
      else if (uVar22 == 2) {
        uVar22 = (uint)(ushort)*puVar35;
      }
      else if (uVar22 == 3) {
        uVar22 = (uint)(uint3)*puVar35;
      }
      else {
        uVar22 = *puVar35;
      }
      uVar20 = uVar22 | bVar16 - 4 << (ulong)((uVar28 & 3) << 3);
      if (3 < uVar28) {
        uVar20 = uVar22;
      }
      uVar20 = uVar20 + 4;
    }
LAB_1007245a0:
    if ((int)uVar20 < 2) {
      if (uVar20 == 0) {
        (**(code **)(lVar23 + 0x20))(puVar37,puVar35,lVar39);
        uVar15 = 0;
      }
      else {
        (**(code **)(lVar24 + 0x20))(puVar37,puVar35,lVar11);
        *(undefined8 *)(uVar1 + (long)puVar37 & 0xfffffffffffffff8) =
             *(undefined8 *)((ulong)(uVar1 + (long)puVar35) & 0xfffffffffffffff8);
        uVar15 = 1;
      }
    }
    else if (uVar20 == 2) {
      *puVar37 = *(undefined8 *)puVar35;
      uVar15 = 2;
    }
    else {
      uVar30 = *(undefined8 *)(puVar35 + 2);
      uVar9 = *(undefined8 *)puVar35;
      puVar37[2] = *(undefined8 *)(puVar35 + 4);
      puVar37[1] = uVar30;
      *puVar37 = uVar9;
      uVar15 = 3;
    }
    *(undefined1 *)((long)puVar37 + uVar2) = uVar15;
    bVar16 = 1;
    goto LAB_100724714;
  }
  (**(code **)(lVar17 + 0x20))(param_1,param_2,lVar8);
  puVar37 = (undefined8 *)((ulong)(uVar3 + (long)param_1) & uVar29);
  puVar35 = (uint *)((ulong)(uVar3 + (long)param_2) & uVar29);
  bVar16 = *(byte *)((long)puVar35 + uVar2);
  uVar20 = (uint)bVar16;
  if (3 < bVar16) {
    uVar22 = 4;
    if (uVar28 < 4) {
      uVar22 = uVar28;
    }
    if ((int)uVar22 < 2) {
      if (uVar22 == 0) goto LAB_10072465c;
      uVar22 = (uint)(byte)*puVar35;
    }
    else if (uVar22 == 2) {
      uVar22 = (uint)(ushort)*puVar35;
    }
    else if (uVar22 == 3) {
      uVar22 = (uint)(uint3)*puVar35;
    }
    else {
      uVar22 = *puVar35;
    }
    uVar20 = uVar22 | bVar16 - 4 << (ulong)((uVar28 & 3) << 3);
    if (3 < uVar28) {
      uVar20 = uVar22;
    }
    uVar20 = uVar20 + 4;
  }
LAB_10072465c:
  if ((int)uVar20 < 2) {
    if (uVar20 == 0) {
      (**(code **)(lVar23 + 0x20))(puVar37,puVar35,lVar39);
      uVar15 = 0;
    }
    else {
      (**(code **)(lVar24 + 0x20))(puVar37,puVar35,lVar11);
      *(undefined8 *)(uVar1 + (long)puVar37 & 0xfffffffffffffff8) =
           *(undefined8 *)((ulong)(uVar1 + (long)puVar35) & 0xfffffffffffffff8);
      uVar15 = 1;
    }
  }
  else if (uVar20 == 2) {
    *puVar37 = *(undefined8 *)puVar35;
    uVar15 = 2;
  }
  else {
    uVar30 = *(undefined8 *)(puVar35 + 2);
    uVar9 = *(undefined8 *)puVar35;
    puVar37[2] = *(undefined8 *)(puVar35 + 4);
    puVar37[1] = uVar30;
    *puVar37 = uVar9;
    uVar15 = 3;
  }
  *(undefined1 *)((long)puVar37 + uVar2) = uVar15;
  (**(code **)(lVar33 + 0x20))
            (lVar40 + (long)puVar37 & uVar19,(ulong)(lVar40 + (long)puVar35) & uVar19,lVar12);
  bVar16 = 2;
LAB_100724714:
  *(byte *)((long)param_1 + uVar5) = bVar16;
  return param_1;
}



/* Address: 0x10072473c | thunk_FUN_100724740 */

int thunk_FUN_100724740(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar16 = *(undefined8 *)(param_3 + 0x20);
  uVar17 = *(undefined8 *)(param_3 + 0x10);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar16,uVar17,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar21 = *(long *)(*(long *)(lVar8 + -8) + 0x40);
  lVar19 = *(long *)(param_3 + 0x18);
  lVar8 = *(long *)(lVar19 + -8);
  bVar3 = *(byte *)(lVar8 + 0x50);
  uVar18 = *(ulong *)(lVar8 + 0x40);
  uVar14 = (lVar21 + (ulong)bVar3 & ((ulong)bVar3 ^ 0xffffffffffffffff)) + uVar18;
  uVar20 = *(undefined8 *)(param_3 + 0x30);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar16,uVar17,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar20,uVar9,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar12 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  lVar11 = *(long *)(*(long *)(lVar8 + -8) + 0x40);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x28),lVar19,puVar6,puVar5);
  uVar13 = (ulong)((uint)bVar3 | *(uint *)(*(long *)(lVar8 + -8) + 0x50) & 0xf8 | 7);
  uVar1 = (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 7U & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar18) {
    uVar1 = uVar18;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  uVar12 = uVar1 + 1 +
           ((lVar21 + uVar12 & (uVar12 ^ 0xffffffffffffffff)) + lVar11 + uVar13 &
           (uVar13 ^ 0xffffffffffffffff));
  if (uVar12 <= uVar14) {
    uVar12 = uVar14;
  }
  lVar8 = 0;
  _swift_checkMetadataState(0,uVar9);
  uVar14 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  uVar1 = ((lVar21 + uVar13 & (uVar13 ^ 0xffffffffffffffff)) + uVar14 + uVar1 + 1 &
          (uVar14 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar8 + -8) + 0x40);
  if (uVar1 <= uVar12) {
    uVar1 = uVar12;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfd) goto LAB_100724950;
  uVar14 = uVar1 + 1;
  uVar10 = (uint)uVar14;
  uVar4 = uVar10 << 3;
  if (uVar10 < 4) {
    uVar15 = ((param_2 + ~(-1 << (ulong)(uVar4 & 0x1f))) - 0xfc >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar15 < 0x100) {
      if (uVar15 < 2) goto LAB_100724950;
      goto LAB_1007248dc;
    }
    if (uVar15 >> 0x10 == 0) {
      uVar15 = (uint)*(ushort *)((long)param_1 + uVar14);
    }
    else {
      uVar15 = *(uint *)((long)param_1 + uVar14);
    }
  }
  else {
LAB_1007248dc:
    uVar15 = (uint)*(byte *)((long)param_1 + uVar14);
  }
  if (uVar15 != 0) {
    uVar2 = 0;
    if (uVar10 < 4) {
      uVar2 = uVar15 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar10 != 0) {
      uVar4 = 4;
      if (uVar10 < 4) {
        uVar4 = uVar10;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar14 = (ulong)(byte)*param_1;
        }
        else {
          uVar14 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar14 = (ulong)(uint3)*param_1;
      }
      else {
        uVar14 = (ulong)*param_1;
      }
    }
    return ((uint)uVar14 | uVar2) + 0xfd;
  }
LAB_100724950:
  iVar7 = 0;
  if (3 < *(byte *)((long)param_1 + uVar1)) {
    iVar7 = (*(byte *)((long)param_1 + uVar1) ^ 0xff) + 1;
  }
  return iVar7;
}



/* Address: 0x100724740 | FUN_100724740 */

int FUN_100724740(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar16 = *(undefined8 *)(param_3 + 0x20);
  uVar17 = *(undefined8 *)(param_3 + 0x10);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar16,uVar17,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar21 = *(long *)(*(long *)(lVar8 + -8) + 0x40);
  lVar19 = *(long *)(param_3 + 0x18);
  lVar8 = *(long *)(lVar19 + -8);
  bVar3 = *(byte *)(lVar8 + 0x50);
  uVar18 = *(ulong *)(lVar8 + 0x40);
  uVar14 = (lVar21 + (ulong)bVar3 & ((ulong)bVar3 ^ 0xffffffffffffffff)) + uVar18;
  uVar20 = *(undefined8 *)(param_3 + 0x30);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar16,uVar17,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar20,uVar9,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar12 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  lVar11 = *(long *)(*(long *)(lVar8 + -8) + 0x40);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x28),lVar19,puVar6,puVar5);
  uVar13 = (ulong)((uint)bVar3 | *(uint *)(*(long *)(lVar8 + -8) + 0x50) & 0xf8 | 7);
  uVar1 = (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 7U & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar18) {
    uVar1 = uVar18;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  uVar12 = uVar1 + 1 +
           ((lVar21 + uVar12 & (uVar12 ^ 0xffffffffffffffff)) + lVar11 + uVar13 &
           (uVar13 ^ 0xffffffffffffffff));
  if (uVar12 <= uVar14) {
    uVar12 = uVar14;
  }
  lVar8 = 0;
  _swift_checkMetadataState(0,uVar9);
  uVar14 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  uVar1 = ((lVar21 + uVar13 & (uVar13 ^ 0xffffffffffffffff)) + uVar14 + uVar1 + 1 &
          (uVar14 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar8 + -8) + 0x40);
  if (uVar1 <= uVar12) {
    uVar1 = uVar12;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfd) goto LAB_100724950;
  uVar14 = uVar1 + 1;
  uVar10 = (uint)uVar14;
  uVar4 = uVar10 << 3;
  if (uVar10 < 4) {
    uVar15 = ((param_2 + ~(-1 << (ulong)(uVar4 & 0x1f))) - 0xfc >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar15 < 0x100) {
      if (uVar15 < 2) goto LAB_100724950;
      goto LAB_1007248dc;
    }
    if (uVar15 >> 0x10 == 0) {
      uVar15 = (uint)*(ushort *)((long)param_1 + uVar14);
    }
    else {
      uVar15 = *(uint *)((long)param_1 + uVar14);
    }
  }
  else {
LAB_1007248dc:
    uVar15 = (uint)*(byte *)((long)param_1 + uVar14);
  }
  if (uVar15 != 0) {
    uVar2 = 0;
    if (uVar10 < 4) {
      uVar2 = uVar15 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar10 != 0) {
      uVar4 = 4;
      if (uVar10 < 4) {
        uVar4 = uVar10;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar14 = (ulong)(byte)*param_1;
        }
        else {
          uVar14 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar14 = (ulong)(uint3)*param_1;
      }
      else {
        uVar14 = (ulong)*param_1;
      }
    }
    return ((uint)uVar14 | uVar2) + 0xfd;
  }
LAB_100724950:
  iVar7 = 0;
  if (3 < *(byte *)((long)param_1 + uVar1)) {
    iVar7 = (*(byte *)((long)param_1 + uVar1) ^ 0xff) + 1;
  }
  return iVar7;
}



/* Address: 0x1007249c8 | thunk_FUN_1007249cc */

void thunk_FUN_1007249cc(uint *param_1,uint param_2,uint param_3,long param_4)

{
  ulong uVar1;
  size_t sVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  byte bVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar17 = *(undefined8 *)(param_4 + 0x20);
  uVar18 = *(undefined8 *)(param_4 + 0x10);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar17,uVar18,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(*(long *)(lVar7 + -8) + 0x40);
  lVar20 = *(long *)(param_4 + 0x18);
  lVar7 = *(long *)(lVar20 + -8);
  bVar16 = *(byte *)(lVar7 + 0x50);
  uVar19 = *(ulong *)(lVar7 + 0x40);
  uVar12 = (lVar14 + (ulong)bVar16 & ((ulong)bVar16 ^ 0xffffffffffffffff)) + uVar19;
  uVar21 = *(undefined8 *)(param_4 + 0x30);
  uVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar17,uVar18,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar21,uVar8,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar10 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  lVar9 = *(long *)(*(long *)(lVar7 + -8) + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_4 + 0x28),lVar20,puVar6,puVar5);
  uVar11 = (ulong)((uint)bVar16 | *(uint *)(*(long *)(lVar7 + -8) + 0x50) & 0xf8 | 7);
  uVar1 = (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 7U & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar19) {
    uVar1 = uVar19;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  uVar10 = uVar1 + 1 +
           ((lVar14 + uVar10 & (uVar10 ^ 0xffffffffffffffff)) + lVar9 + uVar11 &
           (uVar11 ^ 0xffffffffffffffff));
  if (uVar10 <= uVar12) {
    uVar10 = uVar12;
  }
  lVar7 = 0;
  _swift_checkMetadataState(0,uVar8);
  uVar12 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar1 = ((lVar14 + uVar11 & (uVar11 ^ 0xffffffffffffffff)) + uVar12 + uVar1 + 1 &
          (uVar12 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar7 + -8) + 0x40);
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  sVar2 = uVar1 + 1;
  uVar15 = (uint)sVar2;
  if (param_3 < 0xfd) {
    bVar16 = 0;
  }
  else if (uVar15 < 4) {
    uVar3 = ((param_3 + ~(-1 << (ulong)(uVar15 << 3 & 0x1f))) - 0xfc >> (ulong)(uVar15 << 3 & 0x1f))
            + 1;
    bVar16 = 2;
    if (0xffff < uVar3) {
      bVar16 = 4;
    }
    if (uVar3 < 0x100) {
      bVar16 = 1 < uVar3;
    }
  }
  else {
    bVar16 = 1;
  }
  if (param_2 < 0xfd) {
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar16 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar1) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfd;
    if (uVar15 < 4) {
      iVar13 = (param_2 >> (ulong)(uVar15 << 3 & 0x1f)) + 1;
      if (uVar15 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar15 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar4 = (undefined2)uVar3;
        if (uVar15 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar15 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar13 = 1;
    }
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar13;
      }
    }
    else if (bVar16 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar13;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar13;
    }
  }
  return;
}



/* Address: 0x1007249cc | FUN_1007249cc */

void FUN_1007249cc(uint *param_1,uint param_2,uint param_3,long param_4)

{
  ulong uVar1;
  size_t sVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  byte bVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar17 = *(undefined8 *)(param_4 + 0x20);
  uVar18 = *(undefined8 *)(param_4 + 0x10);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar17,uVar18,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(*(long *)(lVar7 + -8) + 0x40);
  lVar20 = *(long *)(param_4 + 0x18);
  lVar7 = *(long *)(lVar20 + -8);
  bVar16 = *(byte *)(lVar7 + 0x50);
  uVar19 = *(ulong *)(lVar7 + 0x40);
  uVar12 = (lVar14 + (ulong)bVar16 & ((ulong)bVar16 ^ 0xffffffffffffffff)) + uVar19;
  uVar21 = *(undefined8 *)(param_4 + 0x30);
  uVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar17,uVar18,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar21,uVar8,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar10 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  lVar9 = *(long *)(*(long *)(lVar7 + -8) + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_4 + 0x28),lVar20,puVar6,puVar5);
  uVar11 = (ulong)((uint)bVar16 | *(uint *)(*(long *)(lVar7 + -8) + 0x50) & 0xf8 | 7);
  uVar1 = (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 7U & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar19) {
    uVar1 = uVar19;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  uVar10 = uVar1 + 1 +
           ((lVar14 + uVar10 & (uVar10 ^ 0xffffffffffffffff)) + lVar9 + uVar11 &
           (uVar11 ^ 0xffffffffffffffff));
  if (uVar10 <= uVar12) {
    uVar10 = uVar12;
  }
  lVar7 = 0;
  _swift_checkMetadataState(0,uVar8);
  uVar12 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar1 = ((lVar14 + uVar11 & (uVar11 ^ 0xffffffffffffffff)) + uVar12 + uVar1 + 1 &
          (uVar12 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar7 + -8) + 0x40);
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  sVar2 = uVar1 + 1;
  uVar15 = (uint)sVar2;
  if (param_3 < 0xfd) {
    bVar16 = 0;
  }
  else if (uVar15 < 4) {
    uVar3 = ((param_3 + ~(-1 << (ulong)(uVar15 << 3 & 0x1f))) - 0xfc >> (ulong)(uVar15 << 3 & 0x1f))
            + 1;
    bVar16 = 2;
    if (0xffff < uVar3) {
      bVar16 = 4;
    }
    if (uVar3 < 0x100) {
      bVar16 = 1 < uVar3;
    }
  }
  else {
    bVar16 = 1;
  }
  if (param_2 < 0xfd) {
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar16 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar1) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfd;
    if (uVar15 < 4) {
      iVar13 = (param_2 >> (ulong)(uVar15 << 3 & 0x1f)) + 1;
      if (uVar15 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar15 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar4 = (undefined2)uVar3;
        if (uVar15 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar15 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar13 = 1;
    }
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar13;
      }
    }
    else if (bVar16 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar13;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar13;
    }
  }
  return;
}



/* Address: 0x100724cd8 | FUN_100724cd8 */

uint FUN_100724cd8(uint *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar14 = *(undefined8 *)(param_2 + 0x20);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar14,uVar15,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar19 = *(long *)(*(long *)(lVar7 + -8) + 0x40);
  lVar17 = *(long *)(param_2 + 0x18);
  lVar7 = *(long *)(lVar17 + -8);
  bVar3 = *(byte *)(lVar7 + 0x50);
  uVar16 = *(ulong *)(lVar7 + 0x40);
  uVar13 = (lVar19 + (ulong)bVar3 & ((ulong)bVar3 ^ 0xffffffffffffffff)) + uVar16;
  uVar18 = *(undefined8 *)(param_2 + 0x30);
  uVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar14,uVar15,puVar5,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar4 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,uVar8,puVar5,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar11 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  lVar10 = *(long *)(*(long *)(lVar7 + -8) + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_2 + 0x28),lVar17,puVar5,puVar4);
  uVar12 = (ulong)((uint)bVar3 | *(uint *)(*(long *)(lVar7 + -8) + 0x50) & 0xf8 | 7);
  uVar1 = (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 7U & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar16) {
    uVar1 = uVar16;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  uVar11 = uVar1 + 1 +
           ((lVar19 + uVar11 & (uVar11 ^ 0xffffffffffffffff)) + lVar10 + uVar12 &
           (uVar12 ^ 0xffffffffffffffff));
  if (uVar11 <= uVar13) {
    uVar11 = uVar13;
  }
  lVar7 = 0;
  _swift_checkMetadataState(0,uVar8);
  uVar13 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar1 = ((lVar19 + uVar12 & (uVar12 ^ 0xffffffffffffffff)) + uVar13 + uVar1 + 1 &
          (uVar13 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar7 + -8) + 0x40);
  if (uVar1 <= uVar11) {
    uVar1 = uVar11;
  }
  bVar3 = *(byte *)((long)param_1 + uVar1);
  uVar6 = (uint)bVar3;
  if (2 < bVar3) {
    uVar9 = (uint)uVar1;
    uVar2 = 4;
    if (uVar9 < 4) {
      uVar2 = uVar9;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) {
        return uVar6;
      }
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar2 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar2 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    if (uVar9 < 4) {
      uVar6 = (uVar6 | bVar3 - 3 << (ulong)((uVar9 & 3) << 3)) + 3;
    }
    else {
      uVar6 = uVar6 + 3;
    }
  }
  return uVar6;
}



/* Address: 0x100724efc | FUN_100724efc */

void FUN_100724efc(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar14 = *(undefined8 *)(param_3 + 0x20);
  uVar15 = *(undefined8 *)(param_3 + 0x10);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar14,uVar15,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar19 = *(long *)(*(long *)(lVar7 + -8) + 0x40);
  lVar17 = *(long *)(param_3 + 0x18);
  lVar7 = *(long *)(lVar17 + -8);
  bVar3 = *(byte *)(lVar7 + 0x50);
  uVar16 = *(ulong *)(lVar7 + 0x40);
  uVar12 = (lVar19 + (ulong)bVar3 & ((ulong)bVar3 ^ 0xffffffffffffffff)) + uVar16;
  uVar18 = *(undefined8 *)(param_3 + 0x30);
  uVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar14,uVar15,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,uVar8,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar10 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  lVar9 = *(long *)(*(long *)(lVar7 + -8) + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x28),lVar17,puVar6,puVar5);
  uVar11 = (ulong)((uint)bVar3 | *(uint *)(*(long *)(lVar7 + -8) + 0x50) & 0xf8 | 7);
  uVar1 = (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 7U & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar16) {
    uVar1 = uVar16;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  uVar10 = uVar1 + 1 +
           ((lVar19 + uVar10 & (uVar10 ^ 0xffffffffffffffff)) + lVar9 + uVar11 &
           (uVar11 ^ 0xffffffffffffffff));
  if (uVar10 <= uVar12) {
    uVar10 = uVar12;
  }
  lVar7 = 0;
  _swift_checkMetadataState(0,uVar8);
  uVar12 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar1 = ((lVar19 + uVar11 & (uVar11 ^ 0xffffffffffffffff)) + uVar12 + uVar1 + 1 &
          (uVar12 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar7 + -8) + 0x40);
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (param_2 < 3) {
    *(char *)((long)param_1 + uVar1) = (char)param_2;
  }
  else {
    param_2 = param_2 - 3;
    uVar13 = (uint)uVar1;
    if (uVar13 < 4) {
      *(char *)((long)param_1 + uVar1) = (char)(param_2 >> (ulong)(uVar13 << 3 & 0x1f)) + '\x03';
      if (uVar13 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar13 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar1);
        uVar4 = (undefined2)uVar2;
        if (uVar13 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar13 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + uVar1) = 3;
      _bzero(param_1,uVar1);
      *param_1 = param_2;
    }
  }
  return;
}


