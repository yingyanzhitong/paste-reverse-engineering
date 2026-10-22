/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100710474 | thunk_FUN_1001f64f0 */

void thunk_FUN_1001f64f0(void)

{
  FUN_1001f64f0();
  return;
}



/* Address: 0x100710478 | FUN_100710478 */

void FUN_100710478(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_7;
  uStack_68 = param_8;
  FUN_10071056c(0,&local_80);
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  iVar2 = *(int *)(lVar4 + 0x38);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + iVar2,1,1,lVar5);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_5,puVar3,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,param_2,lVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x34));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Address: 0x10071056c | FUN_10071056c */

void FUN_10071056c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbd294);
  return;
}



/* Address: 0x100710578 | FUN_100710578 */

void FUN_100710578(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x38);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001007105dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x10))
            (param_1,unaff_x20 + iVar1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x1007105e0 | FUN_1007105e0 */

void FUN_1007105e0(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x38);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100710648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x28))
            (unaff_x20 + iVar1,param_1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x10071064c | FUN_10071064c */

void FUN_10071064c(undefined8 param_1,long param_2)

{
  Optional OVar1;
  ulong uVar2;
  ulong uVar3;
  undefined7 extraout_var;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar4 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x28) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(param_2 + 0x10);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness();
  *(long *)(unaff_x22 + 0x50) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x80) = CONCAT71(extraout_var,OVar1.value);
  lVar4 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x88) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  _swift_task_switch(FUN_100710784,0,0);
  return;
}



/* Address: 0x100710784 | FUN_100710784 */

void FUN_100710784(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar1 = *(long *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar14 = *(long *)(unaff_x22 + 0x58);
  lVar2 = *(long *)(unaff_x22 + 0x20);
  iVar8 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x38);
  lVar17 = (long)iVar8;
  *(int *)(unaff_x22 + 0x108) = iVar8;
  pcVar18 = *(code **)(lVar1 + 0x10);
  *(code **)(unaff_x22 + 0xb8) = pcVar18;
  (*pcVar18)(uVar15,lVar2 + lVar17,uVar12);
  (*pcVar18)(uVar13,uVar15,uVar12);
  pcVar18 = *(code **)(lVar14 + 0x30);
  *(code **)(unaff_x22 + 0xc0) = pcVar18;
  uVar15 = uVar13;
  (*pcVar18)(uVar13,1,uVar10);
  pcVar18 = *(code **)(lVar1 + 8);
  *(code **)(unaff_x22 + 200) = pcVar18;
  (*pcVar18)(uVar13,uVar12);
  puVar9 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  if ((int)uVar15 == 1) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar10 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar13,uVar12,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    _swift_getAssociatedConformanceWitness
              (uVar13,uVar12,uVar10,puVar9,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar11 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xd0) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_100710af8;
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar1 = *(long *)(unaff_x22 + 0x58);
    (*pcVar18)(lVar2 + lVar17,*(undefined8 *)(unaff_x22 + 0x80));
    (**(code **)(lVar1 + 0x38))(lVar2 + lVar17,1,1,uVar13);
    pcVar18 = *(code **)(unaff_x22 + 0xc0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
    (**(code **)(unaff_x22 + 0xb8))
              (uVar13,*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0x80));
    (*pcVar18)(uVar13,1,uVar12);
    if ((int)uVar13 == 1) {
      pcVar18 = *(code **)(unaff_x22 + 200);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
      (*pcVar18)(*(undefined8 *)(unaff_x22 + 0xb0),uVar13);
      (*pcVar18)(uVar12,uVar13);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
      (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x38))
                (*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x28));
      _swift_task_dealloc(uVar3);
      _swift_task_dealloc(uVar13);
      _swift_task_dealloc(uVar4);
      _swift_task_dealloc(uVar12);
      _swift_task_dealloc(uVar16);
      _swift_task_dealloc(uVar5);
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(uVar6);
      _swift_task_dealloc(uVar15);
      _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001007109c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar1 = *(long *)(unaff_x22 + 0x58);
    lVar14 = *(long *)(unaff_x22 + 0x18);
    pcVar18 = *(code **)(lVar1 + 0x20);
    *(code **)(unaff_x22 + 0xe0) = pcVar18;
    (*pcVar18)(uVar10,*(undefined8 *)(unaff_x22 + 0x98),uVar12);
    *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(lVar14 + 0x28);
    Swift::RangeReplaceableCollection::init();
    pcVar18 = *(code **)(lVar1 + 0x10);
    *(code **)(unaff_x22 + 0xf0) = pcVar18;
    (*pcVar18)(uVar13,uVar10,uVar12);
    Swift::RangeReplaceableCollection::_append();
    (*pcVar18)(uVar15,uVar10,uVar12);
    puVar9 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
    uVar13 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar10 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar13,uVar12,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    _swift_getAssociatedConformanceWitness
              (uVar13,uVar12,uVar10,puVar9,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar11 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xf8) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_100710de8;
  }
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100710af8 | FUN_100710af8 */

void FUN_100710af8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100710b5c;
  }
  else {
    pcVar1 = FUN_100711158;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100710b5c | FUN_100710b5c */

void FUN_100710b5c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar1 = *(long *)(unaff_x22 + 0x88);
  (**(code **)(unaff_x22 + 200))(uVar10,uVar11);
  (**(code **)(lVar1 + 0x20))(uVar10,uVar9,uVar11);
  pcVar13 = *(code **)(unaff_x22 + 0xc0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(unaff_x22 + 0xb8))
            (uVar11,*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0x80));
  (*pcVar13)(uVar11,1,uVar9);
  if ((int)uVar11 == 1) {
    pcVar13 = *(code **)(unaff_x22 + 200);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
    (*pcVar13)(*(undefined8 *)(unaff_x22 + 0xb0),uVar11);
    (*pcVar13)(uVar9,uVar11);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x28));
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100710cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x58);
  lVar12 = *(long *)(unaff_x22 + 0x18);
  pcVar13 = *(code **)(lVar1 + 0x20);
  *(code **)(unaff_x22 + 0xe0) = pcVar13;
  (*pcVar13)(uVar10,*(undefined8 *)(unaff_x22 + 0x98),uVar9);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(lVar12 + 0x28);
  Swift::RangeReplaceableCollection::init();
  pcVar13 = *(code **)(lVar1 + 0x10);
  *(code **)(unaff_x22 + 0xf0) = pcVar13;
  (*pcVar13)(uVar11,uVar10,uVar9);
  Swift::RangeReplaceableCollection::_append();
  (*pcVar13)(uVar14,uVar10,uVar9);
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar11,uVar9,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar11,uVar9,uVar10,puVar7,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar8 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100710de8;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100710de8 | FUN_100710de8 */

void FUN_100710de8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x100) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xf8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100710e4c;
  }
  else {
    pcVar1 = FUN_10071122c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100710e4c | FUN_100710e4c */

void FUN_100710e4c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  code *pcVar15;
  long lVar16;
  code *pcVar17;
  code *pcVar18;
  long lVar19;
  
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = uVar12;
  (**(code **)(unaff_x22 + 0xc0))(uVar12,1,uVar11);
  if ((int)uVar8 == 1) {
    pcVar15 = *(code **)(unaff_x22 + 200);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
    pcVar17 = *(code **)(*(long *)(unaff_x22 + 0x58) + 8);
    (*pcVar17)(*(undefined8 *)(unaff_x22 + 0x68),uVar11);
    (*pcVar17)(uVar8,uVar11);
    (*pcVar15)(uVar13,uVar2);
    (*pcVar15)(uVar12,uVar2);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar9 = *(ulong *)(unaff_x22 + 0x68);
    lVar1 = *(long *)(unaff_x22 + 0x18);
    lVar16 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(unaff_x22 + 0xe0))(uVar8,uVar12,uVar11);
    (**(code **)(lVar16 + *(int *)(lVar1 + 0x34)))(uVar9,uVar8);
    if ((uVar9 & 1) != 0) {
      pcVar15 = *(code **)(unaff_x22 + 0xe0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
      lVar1 = *(long *)(unaff_x22 + 0x58);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
      (**(code **)(unaff_x22 + 0xf0))(*(undefined8 *)(unaff_x22 + 0x70),uVar11,uVar12);
      Swift::RangeReplaceableCollection::_append();
      (**(code **)(lVar1 + 8))(uVar8,uVar12);
      (*pcVar15)(uVar8,uVar11,uVar12);
      puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
      uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar12 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar8,uVar11,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
      _swift_getAssociatedConformanceWitness
                (uVar8,uVar11,uVar12,puVar7,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar10 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xf8) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_100710de8;
      Swift::AsyncIteratorProtocol::_next();
      return;
    }
    pcVar15 = *(code **)(unaff_x22 + 0xe0);
    pcVar18 = *(code **)(unaff_x22 + 200);
    lVar19 = (long)*(int *)(unaff_x22 + 0x108);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar1 = *(long *)(unaff_x22 + 0x58);
    lVar16 = *(long *)(unaff_x22 + 0x20);
    pcVar17 = *(code **)(lVar1 + 8);
    (*pcVar17)(*(undefined8 *)(unaff_x22 + 0x68),uVar12);
    (*pcVar17)(uVar8,uVar12);
    (*pcVar18)(uVar13,uVar2);
    (*pcVar18)(lVar16 + lVar19,uVar2);
    (*pcVar15)(lVar16 + lVar19,uVar11,uVar12);
    (**(code **)(lVar1 + 0x38))(lVar16 + lVar19,0,1,uVar12);
  }
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x38),
             *(undefined8 *)(unaff_x22 + 0x28));
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),0,1,*(undefined8 *)(unaff_x22 + 0x28));
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100711154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100711158 | FUN_100711158 */

void FUN_100711158(void)

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
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(unaff_x22 + 200))(uVar5,*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100711228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10071122c | FUN_10071122c */

void FUN_10071122c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
  pcVar11 = *(code **)(*(long *)(unaff_x22 + 0x58) + 8);
  (*pcVar11)(*(undefined8 *)(unaff_x22 + 0x68),uVar1);
  (**(code **)(lVar2 + 8))(uVar3,uVar10);
  (*pcVar11)(uVar8,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(unaff_x22 + 200))(uVar4,*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000100711338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10071133c | FUN_10071133c */

void FUN_10071133c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x110;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_10071064c(plVar1,param_1,param_2);
  return;
}



/* Address: 0x1007113a4 | FUN_1007113a4 */

void FUN_1007113a4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  lVar4 = *(long *)(lVar7 + 0x40);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar6,lVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar3 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  (**(code **)(lVar7 + 0x10))(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0));
  Swift::AsyncSequence::_makeAsyncIterator();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x34));
  uVar2 = puVar1[1];
  FUN_100710478(param_1,(long)(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0)) -
                        (lVar3 + 0xfU & 0xfffffffffffffff0),*puVar1,uVar2,lVar5,
                *(undefined8 *)(param_2 + 0x18),uVar6,*(undefined8 *)(param_2 + 0x28));
  _swift_retain(uVar2);
  return;
}



/* Address: 0x10071149c | FUN_10071149c */

void FUN_10071149c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c745b8,param_1);
  return;
}



/* Address: 0x1007114ac | FUN_1007114ac */

void FUN_1007114ac(long param_1)

{
  FUN_1007113a4();
                    /* WARNING: Could not recover jumptable at 0x0001007114d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x1007114dc | FUN_1007114dc */

void FUN_1007114dc(long param_1)

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
    puStack_28 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x30);
  }
  return;
}



/* Address: 0x100711554 | FUN_100711554 */

void FUN_100711554(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_1[2],*param_1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  _swift_getFunctionTypeMetadata2
            (0x44000002,uVar1,uVar1,PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x10071159c | FUN_10071159c */

void FUN_10071159c(long param_1)

{
  Optional OVar1;
  long lVar2;
  ulong uVar3;
  undefined7 extraout_var;
  ulong uVar4;
  undefined8 uVar5;
  long local_48;
  undefined *puStack_40;
  long local_38;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = 0x13f;
  uVar3 = uVar4;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar4,uVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (uVar3 < 0x40) {
    local_48 = *(long *)(lVar2 + -8) + 0x40;
    puStack_40 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar4,uVar5,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (uVar3 < 0x40) {
      local_38 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,3,&local_48,param_1 + 0x30);
    }
  }
  return;
}



/* Address: 0x100711678 | FUN_100711678 */

long * FUN_100711678(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = *(undefined8 *)(param_3 + 0x10);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar9,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar15 = *(long *)(lVar3 + -8);
  lVar13 = *(long *)(lVar15 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar9,puVar2,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar12 = *(long *)(lVar4 + -8);
  uVar5 = (ulong)*(uint *)(lVar12 + 0x50) & 0xff;
  sVar6 = *(size_t *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    sVar6 = sVar6 + 1;
  }
  uVar1 = (uint)uVar5 | *(uint *)(lVar15 + 0x50) & 0xf8;
  if ((((*(uint *)(lVar15 + 0x50) | *(uint *)(lVar12 + 0x50)) >> 0x14 & 1) == 0) &&
     (0xffffffffffffffe6 < ((-0x11 - uVar5) - (lVar13 + 7U & 0xfffffffffffffff8) | uVar5) - sVar6 &&
      uVar1 < 8)) {
    (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar3);
    puVar10 = (undefined8 *)((long)param_1 + lVar13 + 7 & 0xfffffffffffffff8);
    puVar8 = (undefined8 *)((long)param_2 + lVar13 + 7 & 0xfffffffffffffff8);
    uVar7 = puVar8[1];
    uVar9 = *puVar8;
    puVar11 = puVar10 + 2;
    puVar10[1] = puVar8[1];
    *puVar10 = uVar9;
    pcVar14 = *(code **)(lVar12 + 0x30);
    _swift_retain(uVar7);
    puVar10 = puVar8 + 2;
    (*pcVar14)(puVar10,1,lVar4);
    if ((int)puVar10 == 0) {
      (**(code **)(lVar12 + 0x10))(puVar11,puVar8 + 2,lVar4);
      (**(code **)(lVar12 + 0x38))(puVar11,0,1,lVar4);
    }
    else {
      _memcpy(puVar11,puVar8 + 2,sVar6);
    }
  }
  else {
    uVar5 = (ulong)(uVar1 | 7);
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100711814 | FUN_100711814 */

void FUN_100711814(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar7 = *(long *)(lVar2 + -8);
  (**(code **)(lVar7 + 8))(param_1,lVar2);
  uVar8 = param_1 + *(long *)(lVar7 + 0x40) + 7U & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(uVar8 + 8));
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar5,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar7 = *(long *)(lVar2 + -8);
  uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar8 + uVar6 + 0x10;
  uVar3 = uVar8 & (uVar6 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x30))(uVar3,1,lVar2);
  if ((int)uVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007118fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 8))(uVar8 & (uVar6 ^ 0xffffffffffffffff),lVar2);
  return;
}



/* Address: 0x100711900 | FUN_100711900 */

long FUN_100711900(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  code *pcVar14;
  undefined8 uVar15;
  
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = *(undefined8 *)(param_3 + 0x10);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar9,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar10 = *(long *)(lVar4 + -8);
  (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar4);
  lVar4 = *(long *)(lVar10 + 0x40) + 7;
  puVar12 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar13 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  uVar11 = puVar13[1];
  uVar15 = *puVar13;
  puVar12[1] = puVar13[1];
  *puVar12 = uVar15;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar9,puVar3,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar1 = uVar8 + 0x10 + (long)puVar12;
  uVar2 = uVar8 + 0x10 + (long)puVar13;
  pcVar14 = *(code **)(lVar10 + 0x30);
  _swift_retain(uVar11);
  uVar5 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar14)(uVar5,1,lVar4);
  if ((int)uVar5 == 0) {
    (**(code **)(lVar10 + 0x10))
              (uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar4);
    (**(code **)(lVar10 + 0x38))(uVar1 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar4);
  }
  else {
    sVar6 = *(size_t *)(lVar10 + 0x40);
    if (*(int *)(lVar10 + 0x54) == 0) {
      sVar6 = sVar6 + 1;
    }
    _memcpy((void *)(uVar1 & (uVar8 ^ 0xffffffffffffffff)),
            (void *)(uVar2 & (uVar8 ^ 0xffffffffffffffff)),sVar6);
  }
  return param_1;
}



/* Address: 0x100711a44 | FUN_100711a44 */

long FUN_100711a44(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  size_t sVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  code *pcVar16;
  undefined8 uVar17;
  
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar10 = *(undefined8 *)(param_3 + 0x20);
  uVar11 = *(undefined8 *)(param_3 + 0x10);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,uVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar13 = *(long *)(lVar4 + -8);
  (**(code **)(lVar13 + 0x18))(param_1,param_2,lVar4);
  lVar4 = *(long *)(lVar13 + 0x40) + 7;
  puVar14 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar15 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  uVar9 = puVar14[1];
  uVar5 = puVar15[1];
  uVar17 = *puVar15;
  puVar14[1] = puVar15[1];
  *puVar14 = uVar17;
  _swift_retain(uVar5);
  _swift_release(uVar9);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,uVar11,puVar3,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar13 = *(long *)(lVar4 + -8);
  uVar12 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar1 = uVar12 + 0x10 + (long)puVar14;
  uVar2 = uVar12 + 0x10 + (long)puVar15;
  pcVar16 = *(code **)(lVar13 + 0x30);
  uVar6 = uVar1 & (uVar12 ^ 0xffffffffffffffff);
  (*pcVar16)(uVar6,1,lVar4);
  uVar7 = uVar2 & (uVar12 ^ 0xffffffffffffffff);
  (*pcVar16)(uVar7,1,lVar4);
  if ((int)uVar6 == 0) {
    if ((int)uVar7 == 0) {
      (**(code **)(lVar13 + 0x18))
                (uVar1 & (uVar12 ^ 0xffffffffffffffff),uVar2 & (uVar12 ^ 0xffffffffffffffff),lVar4);
      return param_1;
    }
    (**(code **)(lVar13 + 8))(uVar1 & (uVar12 ^ 0xffffffffffffffff),lVar4);
  }
  else if ((int)uVar7 == 0) {
    (**(code **)(lVar13 + 0x10))
              (uVar1 & (uVar12 ^ 0xffffffffffffffff),uVar2 & (uVar12 ^ 0xffffffffffffffff),lVar4);
    (**(code **)(lVar13 + 0x38))(uVar1 & (uVar12 ^ 0xffffffffffffffff),0,1,lVar4);
    return param_1;
  }
  sVar8 = *(size_t *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    sVar8 = sVar8 + 1;
  }
  _memcpy((void *)(uVar1 & (uVar12 ^ 0xffffffffffffffff)),
          (void *)(uVar2 & (uVar12 ^ 0xffffffffffffffff)),sVar8);
  return param_1;
}



/* Address: 0x100711bd4 | FUN_100711bd4 */

long FUN_100711bd4(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = *(undefined8 *)(param_3 + 0x10);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar9,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar10 = *(long *)(lVar4 + -8);
  (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar4);
  lVar4 = *(long *)(lVar10 + 0x40) + 7;
  puVar11 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar12 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  uVar13 = *puVar12;
  puVar11[1] = puVar12[1];
  *puVar11 = uVar13;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar9,puVar3,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar1 = uVar8 + 0x10 + (long)puVar11;
  uVar2 = uVar8 + 0x10 + (long)puVar12;
  uVar5 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (**(code **)(lVar10 + 0x30))(uVar5,1,lVar4);
  if ((int)uVar5 == 0) {
    (**(code **)(lVar10 + 0x20))
              (uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar4);
    (**(code **)(lVar10 + 0x38))(uVar1 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar4);
  }
  else {
    sVar6 = *(size_t *)(lVar10 + 0x40);
    if (*(int *)(lVar10 + 0x54) == 0) {
      sVar6 = sVar6 + 1;
    }
    _memcpy((void *)(uVar1 & (uVar8 ^ 0xffffffffffffffff)),
            (void *)(uVar2 & (uVar8 ^ 0xffffffffffffffff)),sVar6);
  }
  return param_1;
}



/* Address: 0x100711d0c | FUN_100711d0c */

long FUN_100711d0c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  size_t sVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  code *pcVar15;
  undefined8 uVar16;
  
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  uVar10 = *(undefined8 *)(param_3 + 0x10);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,uVar10,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar12 = *(long *)(lVar4 + -8);
  (**(code **)(lVar12 + 0x28))(param_1,param_2,lVar4);
  lVar4 = *(long *)(lVar12 + 0x40) + 7;
  puVar13 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar14 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  uVar5 = puVar13[1];
  uVar16 = *puVar14;
  puVar13[1] = puVar14[1];
  *puVar13 = uVar16;
  _swift_release(uVar5);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,uVar10,puVar3,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar12 = *(long *)(lVar4 + -8);
  uVar11 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar1 = uVar11 + 0x10 + (long)puVar13;
  uVar2 = uVar11 + 0x10 + (long)puVar14;
  pcVar15 = *(code **)(lVar12 + 0x30);
  uVar6 = uVar1 & (uVar11 ^ 0xffffffffffffffff);
  (*pcVar15)(uVar6,1,lVar4);
  uVar7 = uVar2 & (uVar11 ^ 0xffffffffffffffff);
  (*pcVar15)(uVar7,1,lVar4);
  if ((int)uVar6 == 0) {
    if ((int)uVar7 == 0) {
      (**(code **)(lVar12 + 0x28))
                (uVar1 & (uVar11 ^ 0xffffffffffffffff),uVar2 & (uVar11 ^ 0xffffffffffffffff),lVar4);
      return param_1;
    }
    (**(code **)(lVar12 + 8))(uVar1 & (uVar11 ^ 0xffffffffffffffff),lVar4);
  }
  else if ((int)uVar7 == 0) {
    (**(code **)(lVar12 + 0x20))
              (uVar1 & (uVar11 ^ 0xffffffffffffffff),uVar2 & (uVar11 ^ 0xffffffffffffffff),lVar4);
    (**(code **)(lVar12 + 0x38))(uVar1 & (uVar11 ^ 0xffffffffffffffff),0,1,lVar4);
    return param_1;
  }
  sVar8 = *(size_t *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    sVar8 = sVar8 + 1;
  }
  _memcpy((void *)(uVar1 & (uVar11 ^ 0xffffffffffffffff)),
          (void *)(uVar2 & (uVar11 ^ 0xffffffffffffffff)),sVar8);
  return param_1;
}



/* Address: 0x100711e90 | FUN_100711e90 */

uint * FUN_100711e90(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar15 = *(undefined8 *)(param_3 + 0x20);
  uVar16 = *(undefined8 *)(param_3 + 0x10);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar15,uVar16,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar17 = *(long *)(lVar6 + -8);
  uVar2 = *(uint *)(lVar17 + 0x54);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar15,uVar16,puVar5,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar9 = *(long *)(lVar7 + -8);
  iVar3 = *(int *)(lVar9 + 0x54);
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar1 = iVar3 - 1;
  }
  uVar10 = uVar2;
  if (uVar2 <= uVar1) {
    uVar10 = uVar1;
  }
  uVar1 = uVar10;
  if (uVar10 < 0x80000000) {
    uVar1 = 0x7fffffff;
  }
  lVar11 = *(long *)(lVar9 + 0x40);
  if (iVar3 == 0) {
    lVar11 = lVar11 + 1;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar12 = (ulong)*(byte *)(lVar9 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_100711fd0;
  lVar11 = lVar11 + (uVar12 + (*(long *)(lVar17 + 0x40) + 7U & 0xfffffffffffffff8) + 0x10 &
                    (uVar12 ^ 0xffffffffffffffff));
  uVar13 = (uint)lVar11;
  uVar4 = uVar13 << 3;
  if (uVar13 < 4) {
    uVar14 = (param_2 - uVar1) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f);
    if (uVar14 < 0xff) {
      if (uVar14 == 0) goto LAB_100711fd0;
      goto LAB_100711f90;
    }
    if (uVar14 < 0xffff) {
      uVar14 = (uint)*(ushort *)((long)param_1 + lVar11);
    }
    else {
      uVar14 = *(uint *)((long)param_1 + lVar11);
    }
  }
  else {
LAB_100711f90:
    uVar14 = (uint)*(byte *)((long)param_1 + lVar11);
  }
  if (uVar14 != 0) {
    uVar2 = 0;
    if (uVar13 < 4) {
      uVar2 = uVar14 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar13 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 4;
      if (uVar13 < 4) {
        uVar10 = uVar13;
      }
      if ((int)uVar10 < 3) {
        if (uVar10 == 1) {
          uVar10 = (uint)(byte)*param_1;
        }
        else {
          uVar10 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar10 == 3) {
        uVar10 = (uint)(uint3)*param_1;
      }
      else {
        uVar10 = *param_1;
      }
    }
    return (uint *)(ulong)(uVar1 + (uVar10 | uVar2) + 1);
  }
LAB_100711fd0:
  if (uVar2 == uVar1) {
                    /* WARNING: Could not recover jumptable at 0x000100711ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar17 + 0x30))(param_1,uVar2,lVar6);
    return param_1;
  }
  puVar8 = (ulong *)((ulong)((long)param_1 + *(long *)(lVar17 + 0x40) + 7) & 0xfffffffffffffff8);
  if ((int)uVar10 < 0) {
    uVar12 = (long)puVar8 + uVar12 + 0x10 & ~uVar12;
    (**(code **)(lVar9 + 0x30))(uVar12,iVar3,lVar7);
    uVar1 = 0;
    if ((int)uVar12 != 0) {
      uVar1 = (int)uVar12 - 1;
    }
  }
  else {
    uVar12 = *puVar8;
    if (0xfffffffe < uVar12) {
      uVar12 = 0xffffffff;
    }
    uVar1 = (int)uVar12 + 1;
  }
  return (uint *)(ulong)uVar1;
}



/* Address: 0x1007120c0 | FUN_1007120c0 */

void FUN_1007120c0(uint *param_1,ulong param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  code *UNRECOVERED_JUMPTABLE;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  
  puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar20 = *(undefined8 *)(param_4 + 0x20);
  uVar21 = *(undefined8 *)(param_4 + 0x10);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar20,uVar21,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar22 = *(long *)(lVar9 + -8);
  uVar4 = *(uint *)(lVar22 + 0x54);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar20,uVar21,puVar8,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = *(long *)(lVar10 + -8);
  uVar5 = *(uint *)(lVar11 + 0x54);
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar3 = uVar5 - 1;
  }
  uVar2 = uVar4;
  if (uVar4 <= uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  lVar13 = *(long *)(lVar22 + 0x40);
  uVar12 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar15 = *(long *)(lVar11 + 0x40);
  if (uVar5 == 0) {
    lVar15 = lVar15 + 1;
  }
  sVar1 = (uVar12 + (lVar13 + 7U & 0xfffffffffffffff8) + 0x10 & (uVar12 ^ 0xffffffffffffffff)) +
          lVar15;
  uVar19 = (uint)sVar1;
  uVar17 = (uint)param_2;
  bVar16 = 0;
  if (uVar3 <= param_3 && param_3 - uVar3 != 0) {
    if (uVar19 < 4) {
      uVar6 = (param_3 - uVar3) + ~(-1 << (ulong)(uVar19 << 3 & 0x1f)) >>
              (ulong)(uVar19 << 3 & 0x1f);
      bVar16 = 2;
      if (0xfffe < uVar6) {
        bVar16 = 4;
      }
      if (uVar6 < 0xff) {
        bVar16 = uVar6 != 0;
      }
    }
    else {
      bVar16 = 1;
    }
  }
  if (uVar3 < uVar17) {
    uVar17 = uVar17 + ~uVar3;
    if (uVar19 < 4) {
      iVar18 = (uVar17 >> (ulong)(uVar19 << 3 & 0x1f)) + 1;
      if (uVar19 != 0) {
        uVar3 = uVar17 & (-1 << (ulong)(uVar19 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar7 = (undefined2)uVar3;
        if (uVar19 == 3) {
          *(undefined2 *)param_1 = uVar7;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar19 == 2) {
          *(undefined2 *)param_1 = uVar7;
        }
        else {
          *(char *)param_1 = (char)uVar17;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *param_1 = uVar17;
      iVar18 = 1;
    }
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar18;
      }
    }
    else if (bVar16 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar18;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar18;
    }
  }
  else {
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar16 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (uVar17 != 0) {
      if (uVar4 == uVar3) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar22 + 0x38);
        lVar10 = lVar9;
        uVar5 = uVar4;
      }
      else {
        puVar14 = (ulong *)((long)param_1 + lVar13 + 7 & 0xfffffffffffffff8);
        if (-1 < (int)uVar2) {
          if (-1 < (int)uVar17) {
            *puVar14 = (ulong)(uVar17 - 1);
            return;
          }
          *puVar14 = (ulong)(uVar17 & 0x7fffffff);
          puVar14[1] = 0;
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 0x38);
        param_1 = (uint *)((long)puVar14 + uVar12 + 0x10 & ~uVar12);
        param_2 = (ulong)(uVar17 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x000100712310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar5,lVar10);
      return;
    }
  }
  return;
}



/* Address: 0x10071237c | thunk_FUN_1001f64f0 */

void thunk_FUN_1001f64f0(void)

{
  thunk_FUN_1001f64f0();
  return;
}



/* Address: 0x100712380 | FUN_100712380 */

void FUN_100712380(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(param_5 + -8);
  lVar3 = (long)&local_a0 - (*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a0 = param_9;
  local_98 = param_3;
  (**(code **)(lVar2 + 0x10))(lVar3);
  (**(code **)(lVar2 + 0x20))(param_1,lVar3,param_5);
  local_70 = local_a0;
  uStack_68 = param_10;
  lVar2 = 0;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  FUN_1007124f8(0,&local_90);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x44));
  *puVar1 = local_98;
  puVar1[1] = param_4;
  _swift_retain(param_4);
  return;
}



/* Address: 0x100712458 | FUN_100712458 */

void FUN_100712458(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  uStack_68 = param_10;
  lVar2 = 0;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = param_9;
  FUN_1007124f8(0,&local_90);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x44));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Address: 0x1007124f8 | FUN_1007124f8 */

void FUN_1007124f8(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbd2e8);
  return;
}



/* Address: 0x100712504 | FUN_100712504 */

void FUN_100712504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  FUN_100712380(param_1);
  return;
}



/* Address: 0x1007125c4 | FUN_1007125c4 */

void FUN_1007125c4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
                    /* WARNING: Could not recover jumptable at 0x000100712610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x100712614 | FUN_100712614 */

void FUN_100712614(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
                    /* WARNING: Could not recover jumptable at 0x000100712664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))();
  return;
}



/* Address: 0x100712668 | FUN_100712668 */

void FUN_100712668(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uStack_68 = param_10;
  lVar4 = 0;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = param_9;
  FUN_100712780(0,&local_90);
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  iVar2 = *(int *)(lVar4 + 0x48);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_8,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar6 = 0;
  _swift_getTupleTypeMetadata2(0,param_6,uVar5,0,0);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_1 + iVar2,1,1,lVar6);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_5,puVar3,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  (**(code **)(*(long *)(lVar6 + -8) + 0x20))(param_1,param_2,lVar6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x44));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Address: 0x100712780 | FUN_100712780 */

void FUN_100712780(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbd348);
  return;
}



/* Address: 0x10071278c | FUN_10071278c */

void FUN_10071278c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  Optional OVar3;
  undefined8 uVar4;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar2 = *(int *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  _swift_getTupleTypeMetadata2(0xff,uVar1,uVar4,0,0);
  OVar3 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100712808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 0x10))
            (param_1,unaff_x20 + iVar2,CONCAT71(extraout_var,OVar3.value));
  return;
}



/* Address: 0x10071280c | FUN_10071280c */

void FUN_10071280c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  Optional OVar3;
  undefined8 uVar4;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar2 = *(int *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  _swift_getTupleTypeMetadata2(0xff,uVar1,uVar4,0,0);
  OVar3 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010071288c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 0x28))
            (unaff_x20 + iVar2,param_1,CONCAT71(extraout_var,OVar3.value));
  return;
}



/* Address: 0x100712890 | FUN_100712890 */

void FUN_100712890(undefined8 param_1,long param_2)

{
  Optional OVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar5;
  undefined8 unaff_x20;
  long lVar6;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar6 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x28) = lVar6;
  lVar5 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  lVar5 = *(long *)(param_2 + 0x20);
  *(long *)(unaff_x22 + 0x40) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(param_2 + 0x10);
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness();
  *(long *)(unaff_x22 + 0x68) = lVar5;
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,lVar6,lVar5,0,0);
  *(long *)(unaff_x22 + 0x70) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0xb0) = CONCAT71(extraout_var,OVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0xd8) = CONCAT71(extraout_var_00,OVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var_00,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar2;
  _swift_task_switch(FUN_100712a68,0,0);
  return;
}



/* Address: 0x100712a68 | FUN_100712a68 */

void FUN_100712a68(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  code *pcVar20;
  undefined8 uVar21;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar10 = *(long *)(unaff_x22 + 0xe0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar1 = *(long *)(unaff_x22 + 0x78);
  lVar15 = *(long *)(unaff_x22 + 0x20);
  iVar6 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x48);
  lVar18 = (long)iVar6;
  *(int *)(unaff_x22 + 0x158) = iVar6;
  pcVar20 = *(code **)(lVar10 + 0x10);
  *(code **)(unaff_x22 + 0x108) = pcVar20;
  (*pcVar20)(uVar16,lVar15 + lVar18,uVar13);
  (*pcVar20)(uVar14,uVar16,uVar13);
  pcVar20 = *(code **)(lVar1 + 0x30);
  *(code **)(unaff_x22 + 0x110) = pcVar20;
  uVar16 = uVar14;
  (*pcVar20)(uVar14,1,uVar8);
  pcVar20 = *(code **)(lVar10 + 8);
  *(code **)(unaff_x22 + 0x118) = pcVar20;
  (*pcVar20)(uVar14,uVar13);
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  if ((int)uVar16 == 1) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar14,uVar13,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    _swift_getAssociatedConformanceWitness
              (uVar14,uVar13,uVar8,puVar7,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar9 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x120) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_100712e38;
  }
  else {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar10 = *(long *)(unaff_x22 + 0x78);
    (*pcVar20)(lVar15 + lVar18,*(undefined8 *)(unaff_x22 + 0xd8));
    (**(code **)(lVar10 + 0x38))(lVar15 + lVar18,1,1,uVar14);
    pcVar20 = *(code **)(unaff_x22 + 0x110);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
    (**(code **)(unaff_x22 + 0x108))
              (uVar14,*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0xd8));
    (*pcVar20)(uVar14,1,uVar13);
    if ((int)uVar14 == 1) {
      pcVar20 = *(code **)(unaff_x22 + 0x118);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x10);
      (*pcVar20)(*(undefined8 *)(unaff_x22 + 0x100),uVar14);
      (*pcVar20)(uVar13,uVar14);
      lVar10 = 0;
      _swift_getTupleTypeMetadata2(0,uVar16,uVar8,0,0);
      (**(code **)(*(long *)(lVar10 + -8) + 0x38))(uVar17,1,1,lVar10);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar8 = *(undefined8 *)(unaff_x22 + 200);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar19 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x100));
      _swift_task_dealloc(uVar14);
      _swift_task_dealloc(uVar2);
      _swift_task_dealloc(uVar13);
      _swift_task_dealloc(uVar3);
      _swift_task_dealloc(uVar8);
      _swift_task_dealloc(uVar19);
      _swift_task_dealloc(uVar4);
      _swift_task_dealloc(uVar16);
      _swift_task_dealloc(uVar21);
      _swift_task_dealloc(uVar5);
      _swift_task_dealloc(uVar17);
      _swift_task_dealloc(uVar12);
      _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000100712d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar10 = *(long *)(unaff_x22 + 0x78);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar1 = *(long *)(unaff_x22 + 0x30);
    lVar15 = *(long *)(unaff_x22 + 0x18);
    pcVar20 = *(code **)(lVar10 + 0x20);
    *(code **)(unaff_x22 + 0x130) = pcVar20;
    (*pcVar20)(uVar16,*(undefined8 *)(unaff_x22 + 0xe8),uVar13);
    *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(lVar15 + 0x38);
    Swift::RangeReplaceableCollection::init();
    (**(code **)(lVar10 + 0x10))(uVar14,uVar16,uVar13);
    Swift::RangeReplaceableCollection::_append();
    pcVar20 = *(code **)(lVar1 + 8);
    *(code **)(unaff_x22 + 0x140) = pcVar20;
    (*pcVar20)(uVar14,uVar8);
    puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
    uVar14 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar14,uVar13,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    _swift_getAssociatedConformanceWitness
              (uVar14,uVar13,uVar8,puVar7,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar9 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x148) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_10071327c;
  }
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100712e38 | FUN_100712e38 */

void FUN_100712e38(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x128) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x120));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100712e9c;
  }
  else {
    pcVar1 = FUN_1007136bc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100712e9c | FUN_100712e9c */

void FUN_100712e9c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 200);
  lVar16 = *(long *)(unaff_x22 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
  (**(code **)(*(long *)(unaff_x22 + 0xb8) + 0x10))
            (uVar14,*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xb0));
  (**(code **)(lVar16 + 0x30))(uVar14,1,uVar13);
  if ((int)uVar14 == 1) {
    uVar14 = *(undefined8 *)(unaff_x22 + 200);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
    pcVar17 = *(code **)(*(long *)(unaff_x22 + 0xb8) + 8);
    (*pcVar17)(*(undefined8 *)(unaff_x22 + 0xd0),uVar13);
    (*pcVar17)(uVar14,uVar13);
  }
  else {
    pcVar17 = *(code **)(unaff_x22 + 0x118);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x100);
    lVar18 = *(long *)(unaff_x22 + 0xf0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
    lVar15 = *(long *)(unaff_x22 + 0xe0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar1 = *(long *)(unaff_x22 + 0xb8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar16 = *(long *)(unaff_x22 + 0x70);
    lVar2 = *(long *)(unaff_x22 + 0x78);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar7 = *(long *)(unaff_x22 + 0x18);
    lVar3 = *(long *)(unaff_x22 + 0x20);
    pcVar21 = *(code **)(*(long *)(unaff_x22 + 0x90) + 0x20);
    (*pcVar21)(uVar22,*(undefined8 *)(unaff_x22 + 200),uVar24);
    iVar8 = *(int *)(lVar16 + 0x30);
    (**(code **)(lVar3 + *(int *)(lVar7 + 0x44)))(lVar18,uVar22);
    (**(code **)(lVar1 + 8))(uVar19,uVar13);
    (*pcVar17)(uVar20,uVar14);
    (*pcVar21)(lVar18 + iVar8,uVar22,uVar24);
    (**(code **)(lVar2 + 0x38))(lVar18,0,1,lVar16);
    (**(code **)(lVar15 + 0x20))(uVar20,lVar18,uVar14);
  }
  pcVar17 = *(code **)(unaff_x22 + 0x110);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(unaff_x22 + 0x108))
            (uVar14,*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0xd8));
  (*pcVar17)(uVar14,1,uVar13);
  if ((int)uVar14 == 1) {
    pcVar17 = *(code **)(unaff_x22 + 0x118);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x10);
    (*pcVar17)(*(undefined8 *)(unaff_x22 + 0x100),uVar14);
    (*pcVar17)(uVar13,uVar14);
    lVar16 = 0;
    _swift_getTupleTypeMetadata2(0,uVar20,uVar19,0,0);
    (**(code **)(*(long *)(lVar16 + -8) + 0x38))(uVar22,1,1,lVar16);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar19 = *(undefined8 *)(unaff_x22 + 200);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x100));
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000100713144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar16 = *(long *)(unaff_x22 + 0x78);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar7 = *(long *)(unaff_x22 + 0x30);
  lVar15 = *(long *)(unaff_x22 + 0x18);
  pcVar17 = *(code **)(lVar16 + 0x20);
  *(code **)(unaff_x22 + 0x130) = pcVar17;
  (*pcVar17)(uVar20,*(undefined8 *)(unaff_x22 + 0xe8),uVar13);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(lVar15 + 0x38);
  Swift::RangeReplaceableCollection::init();
  (**(code **)(lVar16 + 0x10))(uVar14,uVar20,uVar13);
  Swift::RangeReplaceableCollection::_append();
  pcVar17 = *(code **)(lVar7 + 8);
  *(code **)(unaff_x22 + 0x140) = pcVar17;
  (*pcVar17)(uVar14,uVar19);
  puVar9 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar14 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar19 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar14,uVar13,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar14,uVar13,uVar19,puVar9,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar10 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x148) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_10071327c;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x10071327c | FUN_10071327c */

void FUN_10071327c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x150) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x148));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007132e0;
  }
  else {
    pcVar1 = FUN_1007137c4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007132e0 | FUN_1007132e0 */

void FUN_1007132e0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  bool bVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  code *pcVar26;
  undefined8 uVar27;
  
  uVar18 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar23 = *(long *)(unaff_x22 + 0x90);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = uVar18;
  (**(code **)(lVar23 + 0x30))(uVar18,1,uVar16);
  if ((int)uVar10 == 1) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar23 = *(long *)(unaff_x22 + 0xb8);
    (**(code **)(unaff_x22 + 0x118))
              (*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0xd8));
    (**(code **)(lVar23 + 8))(uVar18,uVar10);
  }
  else {
    uVar19 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar1 = *(long *)(unaff_x22 + 0x20);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar24 = *(long *)(unaff_x22 + 0x18);
    pcVar14 = *(code **)(lVar23 + 0x20);
    (*pcVar14)(uVar19,uVar18,uVar16);
    (**(code **)(lVar1 + *(int *)(lVar24 + 0x44)))(uVar20,uVar19);
    bVar9 = Swift::Equatable::___infix(uVar20,uVar21,uVar10,*(undefined8 *)(lVar24 + 0x30));
    if (bVar9) {
      pcVar14 = *(code **)(unaff_x22 + 0x140);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
      lVar23 = *(long *)(unaff_x22 + 0x90);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x28);
      (**(code **)(lVar23 + 0x10))(*(undefined8 *)(unaff_x22 + 0x98),uVar16,uVar18);
      Swift::RangeReplaceableCollection::_append();
      (*pcVar14)(uVar10,uVar19);
      (**(code **)(lVar23 + 8))(uVar16,uVar18);
      puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
      uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar18 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar10,uVar16,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
      _swift_getAssociatedConformanceWitness
                (uVar10,uVar16,uVar18,puVar8,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar11 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x148) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_10071327c;
      Swift::AsyncIteratorProtocol::_next();
      return;
    }
    pcVar26 = *(code **)(unaff_x22 + 0x118);
    uVar19 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar1 = *(long *)(unaff_x22 + 0x70);
    lVar2 = *(long *)(unaff_x22 + 0x78);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar23 = *(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x158);
    lVar24 = *(long *)(unaff_x22 + 0x30);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x38);
    (*pcVar26)(*(undefined8 *)(unaff_x22 + 0x100),uVar19);
    (*pcVar26)(lVar23,uVar19);
    iVar6 = *(int *)(lVar1 + 0x30);
    (**(code **)(lVar24 + 0x20))(lVar23,uVar16,uVar10);
    (*pcVar14)(lVar23 + iVar6,uVar18,uVar21);
    (**(code **)(lVar2 + 0x38))(lVar23,0,1,lVar1);
  }
  pcVar14 = *(code **)(unaff_x22 + 0x130);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  lVar17 = *(long *)(unaff_x22 + 0x80);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar24 = *(long *)(unaff_x22 + 0x70);
  lVar23 = *(long *)(unaff_x22 + 0x48);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  lVar25 = *(long *)(unaff_x22 + 0x10);
  lVar12 = 0;
  _swift_getTupleTypeMetadata2(0,uVar18,uVar21,0,0);
  iVar6 = *(int *)(lVar12 + 0x30);
  (*pcVar14)(lVar17,uVar10,lVar24);
  iVar7 = *(int *)(lVar24 + 0x30);
  (**(code **)(lVar2 + 0x20))(lVar25,lVar17,uVar18);
  (**(code **)(lVar23 + 0x20))(lVar25 + iVar6,uVar19,uVar21);
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar25,0,1,lVar12);
  (**(code **)(lVar1 + 8))(lVar17 + iVar7,uVar16);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar18 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x100));
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x0001007136b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007136bc | FUN_1007136bc */

void FUN_1007136bc(void)

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
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(unaff_x22 + 0x118))(uVar7,*(undefined8 *)(unaff_x22 + 0xd8));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001007137c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007137c4 | FUN_1007137c4 */

void FUN_1007137c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  long unaff_x22;
  
  uVar15 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar6 = *(long *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
  (**(code **)(lVar6 + 8))(uVar15,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(unaff_x22 + 0x118))(uVar7,*(undefined8 *)(unaff_x22 + 0xd8));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001007138f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007138f4 | FUN_1007138f4 */

void FUN_1007138f4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x160;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100712890(plVar1,param_1,param_2);
  return;
}



/* Address: 0x10071395c | thunk_FUN_100713960 */

undefined1  [16] thunk_FUN_100713960(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x44));
  auVar2 = *pauVar1;
  _swift_retain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x100713960 | FUN_100713960 */

undefined1  [16] FUN_100713960(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x44));
  auVar2 = *pauVar1;
  _swift_retain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x100713994 | FUN_100713994 */

void FUN_100713994(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  undefined8 auStack_60 [2];
  
  lVar9 = *(long *)(param_2 + 0x10);
  lVar11 = *(long *)(lVar9 + -8);
  lVar8 = *(long *)(lVar11 + 0x40);
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar9,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar7 = (long)(&stack0xffffffffffffffb0 + -(lVar8 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar11 + 0x10))(&stack0xffffffffffffffb0 + -(lVar8 + 0xfU & 0xfffffffffffffff0));
  Swift::AsyncSequence::_makeAsyncIterator();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x44));
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(lVar7 + -0x10) = *(undefined8 *)(param_2 + 0x38);
  FUN_100712668(param_1,lVar7,uVar2,uVar5,lVar9,uVar3,uVar6,uVar10,uVar4);
  _swift_retain(uVar5);
  return;
}



/* Address: 0x100713a94 | FUN_100713a94 */

void FUN_100713a94(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c746c8,param_1);
  return;
}



/* Address: 0x100713aa4 | FUN_100713aa4 */

void FUN_100713aa4(long param_1)

{
  FUN_100713994();
                    /* WARNING: Could not recover jumptable at 0x000100713ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x100713ad4 | FUN_100713ad4 */

void FUN_100713ad4(long param_1)

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
    puStack_28 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x40);
  }
  return;
}



/* Address: 0x100713b4c | FUN_100713b4c */

void FUN_100713b4c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_1[3],*param_1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  _swift_getFunctionTypeMetadata1(0x44000001,uVar2,uVar1);
  return;
}



/* Address: 0x100713b94 | FUN_100713b94 */

void FUN_100713b94(long param_1)

{
  Optional OVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined7 extraout_var;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_48;
  undefined *puStack_40;
  long local_38;
  
  uVar5 = *(ulong *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = 0x13f;
  uVar4 = uVar5;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar5,uVar6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (uVar4 < 0x40) {
    local_48 = *(long *)(lVar2 + -8) + 0x40;
    puStack_40 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar5,uVar6,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    uVar4 = 0xff;
    _swift_getTupleTypeMetadata2(0xff,uVar7,uVar3,0,0);
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (uVar4 < 0x40) {
      local_38 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,3,&local_48,param_1 + 0x40);
    }
  }
  return;
}



/* Address: 0x100713c8c | FUN_100713c8c */

long * FUN_100713c8c(long *param_1,long *param_2,long param_3)

{
  uint *puVar1;
  size_t sVar2;
  uint uVar3;
  size_t sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  
  puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar21 = *(undefined8 *)(param_3 + 0x28);
  uVar22 = *(undefined8 *)(param_3 + 0x10);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar21,uVar22,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar26 = *(long *)(lVar10 + -8);
  lVar19 = *(long *)(lVar26 + 0x40);
  lVar14 = *(long *)(param_3 + 0x18);
  lVar20 = *(long *)(lVar14 + -8);
  uVar18 = *(uint *)(lVar20 + 0x50);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar21,uVar22,puVar8,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar23 = *(long *)(lVar11 + -8);
  uVar5 = *(uint *)(lVar23 + 0x54);
  uVar15 = (ulong)*(uint *)(lVar23 + 0x50) & 0xff;
  uVar18 = *(uint *)(lVar23 + 0x50) | uVar18;
  uVar3 = uVar18 & 0xff;
  uVar6 = *(uint *)(lVar20 + 0x54);
  uVar16 = *(long *)(lVar20 + 0x40) + uVar15;
  sVar2 = (uVar16 & (uVar15 ^ 0xffffffffffffffff)) + *(long *)(lVar23 + 0x40);
  sVar4 = sVar2;
  if (uVar5 == 0 && uVar6 == 0) {
    sVar4 = sVar2 + 1;
  }
  uVar7 = uVar3 | *(uint *)(lVar26 + 0x50) & 0xf8;
  if ((7 < uVar7 || ((*(uint *)(lVar26 + 0x50) | uVar18) & 0x100000) != 0) ||
      ((-0x11 - (lVar19 + 7U & 0xfffffffffffffff8)) - (ulong)uVar3 | (ulong)uVar3) - sVar4 <
      0xffffffffffffffe7) {
    uVar16 = (ulong)(uVar7 | 7);
    lVar10 = *param_2;
    *param_1 = lVar10;
    _swift_retain();
    return (long *)(lVar10 + (uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff)));
  }
  uVar15 = ~uVar15;
  (**(code **)(lVar26 + 0x10))(param_1,param_2,lVar10);
  puVar24 = (undefined8 *)((long)param_1 + lVar19 + 7 & 0xfffffffffffffff8);
  puVar17 = (undefined8 *)((long)param_2 + lVar19 + 7 & 0xfffffffffffffff8);
  uVar21 = puVar17[1];
  uVar22 = *puVar17;
  puVar25 = puVar24 + 2;
  puVar24[1] = puVar17[1];
  *puVar24 = uVar22;
  puVar1 = (uint *)(puVar17 + 2);
  _swift_retain(uVar21);
  if (uVar5 == 0 && uVar6 == 0) {
    if (*(byte *)((long)puVar1 + sVar2) != 0) {
      uVar18 = (uint)sVar2;
      uVar3 = 0;
      if (uVar18 < 4) {
        uVar3 = *(byte *)((long)puVar1 + sVar2) - 1 << (ulong)((uVar18 & 3) << 3);
      }
      if (uVar18 == 0) {
        uVar18 = 0;
      }
      else {
        uVar7 = 4;
        if (uVar18 < 4) {
          uVar7 = uVar18;
        }
        if ((int)uVar7 < 3) {
          if (uVar7 == 1) {
            uVar18 = (uint)(byte)*puVar1;
          }
          else {
            uVar18 = (uint)(ushort)*puVar1;
          }
        }
        else if (uVar7 == 3) {
          uVar18 = (uint)(uint3)*puVar1;
        }
        else {
          uVar18 = *puVar1;
        }
      }
      if ((uVar18 | uVar3) != 0xffffffff) goto LAB_100713e9c;
    }
  }
  else {
    if (uVar6 < uVar5) {
      uVar12 = (ulong)(uVar16 + (long)puVar1) & uVar15;
      (**(code **)(lVar23 + 0x30))(uVar12,uVar5,lVar11);
      iVar9 = (int)uVar12;
    }
    else {
      puVar13 = puVar1;
      (**(code **)(lVar20 + 0x30))(puVar1,uVar6,lVar14);
      iVar9 = (int)puVar13;
    }
    if (iVar9 != 0) {
LAB_100713e9c:
      _memcpy(puVar25,puVar1,sVar4);
      return param_1;
    }
  }
  (**(code **)(lVar20 + 0x10))(puVar25,puVar1,lVar14);
  (**(code **)(lVar23 + 0x10))
            (uVar16 + (long)puVar25 & uVar15,(ulong)(uVar16 + (long)puVar1) & uVar15,lVar11);
  if (uVar5 == 0 && uVar6 == 0) {
    *(undefined1 *)((long)puVar25 + sVar2) = 0;
  }
  return param_1;
}



/* Address: 0x100713f4c | FUN_100713f4c */

void FUN_100713f4c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  
  puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar12 = *(undefined8 *)(param_2 + 0x28);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar12,uVar14,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar16 = *(long *)(lVar5 + -8);
  (**(code **)(lVar16 + 8))(param_1,lVar5);
  uVar18 = param_1 + *(long *)(lVar16 + 0x40) + 7U & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(uVar18 + 8));
  lVar16 = *(long *)(param_2 + 0x18);
  lVar17 = *(long *)(lVar16 + -8);
  bVar3 = *(byte *)(lVar17 + 0x50);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar12,uVar14,puVar4,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar15 = *(long *)(lVar5 + -8);
  uVar2 = *(uint *)(lVar15 + 0x54);
  uVar11 = (ulong)(*(uint *)(lVar15 + 0x50) & 0xff | (uint)bVar3);
  uVar9 = (ulong)*(uint *)(lVar15 + 0x50) & 0xff;
  puVar13 = (uint *)(uVar18 + uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff));
  uVar8 = *(uint *)(lVar17 + 0x54);
  uVar11 = *(long *)(lVar17 + 0x40) + uVar9;
  if (uVar2 == 0 && uVar8 == 0) {
    uVar18 = (uVar11 & (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar15 + 0x40);
    if (*(byte *)((long)puVar13 + uVar18) != 0) {
      uVar8 = (uint)uVar18;
      uVar2 = 0;
      if (uVar8 < 4) {
        uVar2 = *(byte *)((long)puVar13 + uVar18) - 1 << (ulong)((uVar8 & 3) << 3);
      }
      if (uVar8 != 0) {
        uVar1 = 4;
        if (uVar8 < 4) {
          uVar1 = uVar8;
        }
        if ((int)uVar1 < 3) {
          if (uVar1 == 1) {
            uVar18 = (ulong)(byte)*puVar13;
          }
          else {
            uVar18 = (ulong)(ushort)*puVar13;
          }
        }
        else if (uVar1 == 3) {
          uVar18 = (ulong)(uint3)*puVar13;
        }
        else {
          uVar18 = (ulong)*puVar13;
        }
      }
      if (((uint)uVar18 | uVar2) != 0xffffffff) {
        return;
      }
    }
  }
  else {
    if (uVar8 < uVar2) {
      pcVar10 = *(code **)(lVar15 + 0x30);
      puVar6 = (uint *)(uVar11 + (long)puVar13 & ~uVar9);
      lVar7 = lVar5;
      uVar8 = uVar2;
    }
    else {
      pcVar10 = *(code **)(lVar17 + 0x30);
      puVar6 = puVar13;
      lVar7 = lVar16;
    }
    (*pcVar10)(puVar6,uVar8,lVar7);
    if ((int)puVar6 != 0) {
      return;
    }
  }
  (**(code **)(lVar17 + 8))(puVar13,lVar16);
                    /* WARNING: Could not recover jumptable at 0x000100714128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar15 + 8))(uVar11 + (long)puVar13 & ~uVar9,lVar5);
  return;
}



/* Address: 0x10071412c | FUN_10071412c */

long FUN_10071412c(long param_1,long param_2,long param_3)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  void *pvVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint *puVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar17 = *(undefined8 *)(param_3 + 0x28);
  uVar18 = *(undefined8 *)(param_3 + 0x10);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar17,uVar18,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar20 = *(long *)(lVar9 + -8);
  (**(code **)(lVar20 + 0x10))(param_1,param_2,lVar9);
  lVar9 = *(long *)(lVar20 + 0x40) + 7;
  puVar21 = (undefined8 *)(lVar9 + param_1 & 0xfffffffffffffff8);
  puVar16 = (undefined8 *)(lVar9 + param_2 & 0xfffffffffffffff8);
  uVar22 = puVar16[1];
  uVar25 = *puVar16;
  puVar21[1] = puVar16[1];
  *puVar21 = uVar25;
  lVar20 = *(long *)(param_3 + 0x18);
  lVar23 = *(long *)(lVar20 + -8);
  bVar6 = *(byte *)(lVar23 + 0x50);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar17,uVar18,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar24 = *(long *)(lVar9 + -8);
  uVar4 = *(uint *)(lVar24 + 0x54);
  uVar11 = (ulong)*(uint *)(lVar24 + 0x50) & 0xff;
  uVar13 = (ulong)(*(uint *)(lVar24 + 0x50) & 0xff | (uint)bVar6);
  pvVar15 = (void *)(uVar13 + 0x10 + (long)puVar21 & (uVar13 ^ 0xffffffffffffffff));
  puVar19 = (uint *)(uVar13 + 0x10 + (long)puVar16 & (uVar13 ^ 0xffffffffffffffff));
  uVar5 = *(uint *)(lVar23 + 0x54);
  uVar14 = ~uVar11;
  uVar13 = *(long *)(lVar23 + 0x40) + uVar11;
  sVar1 = (uVar13 & (uVar11 ^ 0xffffffffffffffff)) + *(long *)(lVar24 + 0x40);
  _swift_retain(uVar22);
  if (uVar4 == 0 && uVar5 == 0) {
    if (*(byte *)((long)puVar19 + sVar1) != 0) {
      uVar12 = (uint)sVar1;
      uVar2 = 0;
      if (uVar12 < 4) {
        uVar2 = *(byte *)((long)puVar19 + sVar1) - 1 << (ulong)((uVar12 & 3) << 3);
      }
      if (uVar12 == 0) {
        uVar12 = 0;
      }
      else {
        uVar3 = 4;
        if (uVar12 < 4) {
          uVar3 = uVar12;
        }
        if ((int)uVar3 < 3) {
          if (uVar3 == 1) {
            uVar12 = (uint)(byte)*puVar19;
          }
          else {
            uVar12 = (uint)(ushort)*puVar19;
          }
        }
        else if (uVar3 == 3) {
          uVar12 = (uint)(uint3)*puVar19;
        }
        else {
          uVar12 = *puVar19;
        }
      }
      if ((uVar12 | uVar2) != 0xffffffff) goto LAB_1007142c8;
    }
  }
  else {
    if (uVar5 < uVar4) {
      uVar11 = (ulong)(uVar13 + (long)puVar19) & uVar14;
      (**(code **)(lVar24 + 0x30))(uVar11,uVar4,lVar9);
      iVar8 = (int)uVar11;
    }
    else {
      puVar10 = puVar19;
      (**(code **)(lVar23 + 0x30))(puVar19,uVar5,lVar20);
      iVar8 = (int)puVar10;
    }
    if (iVar8 != 0) {
LAB_1007142c8:
      if (uVar4 == 0 && uVar5 == 0) {
        sVar1 = sVar1 + 1;
      }
      _memcpy(pvVar15,puVar19,sVar1);
      return param_1;
    }
  }
  (**(code **)(lVar23 + 0x10))(pvVar15,puVar19,lVar20);
  (**(code **)(lVar24 + 0x10))
            (uVar13 + (long)pvVar15 & uVar14,(ulong)(uVar13 + (long)puVar19) & uVar14,lVar9);
  if (uVar4 == 0 && uVar5 == 0) {
    *(undefined1 *)((long)pvVar15 + sVar1) = 0;
  }
  return param_1;
}



/* Address: 0x100714374 | FUN_100714374 */

long FUN_100714374(long param_1,long param_2,long param_3)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  code *pcVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint *puVar23;
  undefined8 uVar24;
  uint *puVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  undefined8 uVar30;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar22 = *(undefined8 *)(param_3 + 0x28);
  uVar24 = *(undefined8 *)(param_3 + 0x10);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar22,uVar24,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar17 = *(long *)(lVar9 + -8);
  (**(code **)(lVar17 + 0x18))(param_1,param_2,lVar9);
  lVar9 = *(long *)(lVar17 + 0x40) + 7;
  puVar18 = (undefined8 *)(lVar9 + param_1 & 0xfffffffffffffff8);
  puVar26 = (undefined8 *)(lVar9 + param_2 & 0xfffffffffffffff8);
  uVar21 = puVar18[1];
  uVar10 = puVar26[1];
  uVar30 = *puVar26;
  puVar18[1] = puVar26[1];
  *puVar18 = uVar30;
  _swift_retain(uVar10);
  _swift_release(uVar21);
  lVar17 = *(long *)(param_3 + 0x18);
  lVar28 = *(long *)(lVar17 + -8);
  bVar5 = *(byte *)(lVar28 + 0x50);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar22,uVar24,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar27 = *(long *)(lVar9 + -8);
  uVar3 = *(uint *)(lVar27 + 0x54);
  uVar13 = (ulong)*(uint *)(lVar27 + 0x50) & 0xff;
  uVar15 = (ulong)(*(uint *)(lVar27 + 0x50) & 0xff | (uint)bVar5);
  puVar23 = (uint *)(uVar15 + 0x10 + (long)puVar18 & (uVar15 ^ 0xffffffffffffffff));
  puVar25 = (uint *)(uVar15 + 0x10 + (long)puVar26 & (uVar15 ^ 0xffffffffffffffff));
  uVar4 = *(uint *)(lVar28 + 0x54);
  uVar19 = ~uVar13;
  uVar15 = *(long *)(lVar28 + 0x40) + uVar13;
  sVar1 = (uVar15 & (uVar13 ^ 0xffffffffffffffff)) + *(long *)(lVar27 + 0x40);
  if (uVar3 == 0 && uVar4 == 0) {
    uVar29 = (uint)sVar1;
    uVar14 = uVar29 << 3;
    if (*(byte *)((long)puVar23 + sVar1) != 0) {
      uVar2 = 0;
      if (uVar29 < 4) {
        uVar2 = *(byte *)((long)puVar23 + sVar1) - 1 << (ulong)(uVar14 & 0x1f);
      }
      if (uVar29 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = 4;
        if (uVar29 < 4) {
          uVar16 = uVar29;
        }
        if ((int)uVar16 < 3) {
          if (uVar16 == 1) {
            uVar16 = (uint)(byte)*puVar23;
          }
          else {
            uVar16 = (uint)(ushort)*puVar23;
          }
        }
        else if (uVar16 == 3) {
          uVar16 = (uint)(uint3)*puVar23;
        }
        else {
          uVar16 = *puVar23;
        }
      }
      if ((uVar16 | uVar2) != 0xffffffff) {
        if (*(byte *)((long)puVar25 + sVar1) == 0) {
LAB_100714708:
          (**(code **)(lVar28 + 0x10))(puVar23,puVar25,lVar17);
          (**(code **)(lVar27 + 0x10))
                    ((ulong)(uVar15 + (long)puVar23) & uVar19,
                     (ulong)(uVar15 + (long)puVar25) & uVar19,lVar9);
          if (uVar3 == 0 && uVar4 == 0) {
            *(byte *)((long)puVar23 + sVar1) = 0;
            return param_1;
          }
          return param_1;
        }
        uVar2 = 0;
        if (uVar29 < 4) {
          uVar2 = *(byte *)((long)puVar25 + sVar1) - 1 << (ulong)(uVar14 & 0x1f);
        }
        if (uVar29 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = 4;
          if (uVar29 < 4) {
            uVar14 = uVar29;
          }
          if ((int)uVar14 < 3) {
            if (uVar14 == 1) {
              uVar14 = (uint)(byte)*puVar25;
            }
            else {
              uVar14 = (uint)(ushort)*puVar25;
            }
          }
          else if (uVar14 == 3) {
            uVar14 = (uint)(uint3)*puVar25;
          }
          else {
            uVar14 = *puVar25;
          }
        }
        if ((uVar14 | uVar2) == 0xffffffff) goto LAB_100714708;
        goto LAB_1007146a4;
      }
    }
    if (*(byte *)((long)puVar25 + sVar1) != 0) {
      uVar2 = 0;
      if (uVar29 < 4) {
        uVar2 = *(byte *)((long)puVar25 + sVar1) - 1 << (ulong)(uVar14 & 0x1f);
      }
      if (uVar29 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = 4;
        if (uVar29 < 4) {
          uVar14 = uVar29;
        }
        if ((int)uVar14 < 3) {
          if (uVar14 == 1) {
            uVar14 = (uint)(byte)*puVar25;
          }
          else {
            uVar14 = (uint)(ushort)*puVar25;
          }
        }
        else if (uVar14 == 3) {
          uVar14 = (uint)(uint3)*puVar25;
        }
        else {
          uVar14 = *puVar25;
        }
      }
      if ((uVar14 | uVar2) != 0xffffffff) goto LAB_100714680;
    }
LAB_1007146bc:
    (**(code **)(lVar28 + 0x18))(puVar23,puVar25,lVar17);
    (**(code **)(lVar27 + 0x18))
              ((ulong)(uVar15 + (long)puVar23) & uVar19,(ulong)(uVar15 + (long)puVar25) & uVar19,
               lVar9);
  }
  else {
    if (uVar4 < uVar3) {
      pcVar20 = *(code **)(lVar27 + 0x30);
      uVar13 = (ulong)(uVar15 + (long)puVar23) & uVar19;
      (*pcVar20)(uVar13,uVar3,lVar9);
      iVar7 = (int)uVar13;
      uVar13 = (ulong)(uVar15 + (long)puVar25) & uVar19;
      (*pcVar20)(uVar13,uVar3,lVar9);
      iVar8 = (int)uVar13;
    }
    else {
      pcVar20 = *(code **)(lVar28 + 0x30);
      puVar11 = puVar23;
      (*pcVar20)(puVar23,uVar4,lVar17);
      puVar12 = puVar25;
      (*pcVar20)(puVar25,uVar4,lVar17);
      iVar8 = (int)puVar12;
      iVar7 = (int)puVar11;
    }
    if (iVar7 == 0) {
      if (iVar8 == 0) goto LAB_1007146bc;
LAB_100714680:
      (**(code **)(lVar28 + 8))(puVar23,lVar17);
      (**(code **)(lVar27 + 8))((ulong)(uVar15 + (long)puVar23) & uVar19,lVar9);
    }
    else if (iVar8 == 0) goto LAB_100714708;
LAB_1007146a4:
    if (uVar3 == 0 && uVar4 == 0) {
      sVar1 = sVar1 + 1;
    }
    _memcpy(puVar23,puVar25,sVar1);
  }
  return param_1;
}



/* Address: 0x100714764 | FUN_100714764 */

long FUN_100714764(long param_1,long param_2,long param_3)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  code *pcVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  void *pvVar17;
  undefined8 uVar18;
  uint *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar16 = *(undefined8 *)(param_3 + 0x28);
  uVar18 = *(undefined8 *)(param_3 + 0x10);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar16,uVar18,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar21 = *(long *)(lVar7 + -8);
  (**(code **)(lVar21 + 0x20))(param_1,param_2,lVar7);
  lVar7 = *(long *)(lVar21 + 0x40) + 7;
  puVar23 = (undefined8 *)(lVar7 + param_1 & 0xfffffffffffffff8);
  puVar24 = (undefined8 *)(lVar7 + param_2 & 0xfffffffffffffff8);
  uVar25 = *puVar24;
  puVar23[1] = puVar24[1];
  *puVar23 = uVar25;
  lVar21 = *(long *)(param_3 + 0x18);
  lVar22 = *(long *)(lVar21 + -8);
  bVar5 = *(byte *)(lVar22 + 0x50);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar16,uVar18,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar20 = *(long *)(lVar7 + -8);
  uVar3 = *(uint *)(lVar20 + 0x54);
  uVar14 = (ulong)*(uint *)(lVar20 + 0x50) & 0xff;
  uVar11 = (ulong)(*(uint *)(lVar20 + 0x50) & 0xff | (uint)bVar5);
  pvVar17 = (void *)(uVar11 + 0x10 + (long)puVar23 & (uVar11 ^ 0xffffffffffffffff));
  puVar19 = (uint *)(uVar11 + 0x10 + (long)puVar24 & (uVar11 ^ 0xffffffffffffffff));
  uVar4 = *(uint *)(lVar22 + 0x54);
  uVar15 = ~uVar14;
  uVar11 = *(long *)(lVar22 + 0x40) + uVar14;
  sVar1 = (uVar11 & (uVar14 ^ 0xffffffffffffffff)) + *(long *)(lVar20 + 0x40);
  if (uVar3 == 0 && uVar4 == 0) {
    if (*(byte *)((long)puVar19 + sVar1) != 0) {
      uVar12 = (uint)sVar1;
      uVar9 = 0;
      if (uVar12 < 4) {
        uVar9 = *(byte *)((long)puVar19 + sVar1) - 1 << (ulong)((uVar12 & 3) << 3);
      }
      if (uVar12 == 0) {
        uVar12 = 0;
      }
      else {
        uVar2 = 4;
        if (uVar12 < 4) {
          uVar2 = uVar12;
        }
        if ((int)uVar2 < 3) {
          if (uVar2 == 1) {
            uVar12 = (uint)(byte)*puVar19;
          }
          else {
            uVar12 = (uint)(ushort)*puVar19;
          }
        }
        else if (uVar2 == 3) {
          uVar12 = (uint)(uint3)*puVar19;
        }
        else {
          uVar12 = *puVar19;
        }
      }
      if ((uVar12 | uVar9) != 0xffffffff) goto LAB_1007148e8;
    }
  }
  else {
    if (uVar4 < uVar3) {
      pcVar13 = *(code **)(lVar20 + 0x30);
      puVar8 = (uint *)((ulong)(uVar11 + (long)puVar19) & uVar15);
      lVar10 = lVar7;
      uVar9 = uVar3;
    }
    else {
      pcVar13 = *(code **)(lVar22 + 0x30);
      puVar8 = puVar19;
      lVar10 = lVar21;
      uVar9 = uVar4;
    }
    (*pcVar13)(puVar8,uVar9,lVar10);
    if ((int)puVar8 != 0) {
LAB_1007148e8:
      if (uVar3 == 0 && uVar4 == 0) {
        sVar1 = sVar1 + 1;
      }
      _memcpy(pvVar17,puVar19,sVar1);
      return param_1;
    }
  }
  (**(code **)(lVar22 + 0x20))(pvVar17,puVar19,lVar21);
  (**(code **)(lVar20 + 0x20))
            (uVar11 + (long)pvVar17 & uVar15,(ulong)(uVar11 + (long)puVar19) & uVar15,lVar7);
  if (uVar3 == 0 && uVar4 == 0) {
    *(undefined1 *)((long)pvVar17 + sVar1) = 0;
  }
  return param_1;
}



/* Address: 0x100714998 | FUN_100714998 */

long FUN_100714998(long param_1,long param_2,long param_3)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  code *pcVar20;
  undefined8 uVar21;
  uint *puVar22;
  undefined8 uVar23;
  uint *puVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  undefined8 uVar29;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar21 = *(undefined8 *)(param_3 + 0x28);
  uVar23 = *(undefined8 *)(param_3 + 0x10);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar21,uVar23,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar17 = *(long *)(lVar9 + -8);
  (**(code **)(lVar17 + 0x28))(param_1,param_2,lVar9);
  lVar9 = *(long *)(lVar17 + 0x40) + 7;
  puVar18 = (undefined8 *)(lVar9 + param_1 & 0xfffffffffffffff8);
  puVar25 = (undefined8 *)(lVar9 + param_2 & 0xfffffffffffffff8);
  uVar10 = puVar18[1];
  uVar29 = *puVar25;
  puVar18[1] = puVar25[1];
  *puVar18 = uVar29;
  _swift_release(uVar10);
  lVar17 = *(long *)(param_3 + 0x18);
  lVar27 = *(long *)(lVar17 + -8);
  bVar5 = *(byte *)(lVar27 + 0x50);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar21,uVar23,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar26 = *(long *)(lVar9 + -8);
  uVar3 = *(uint *)(lVar26 + 0x54);
  uVar13 = (ulong)*(uint *)(lVar26 + 0x50) & 0xff;
  uVar15 = (ulong)(*(uint *)(lVar26 + 0x50) & 0xff | (uint)bVar5);
  puVar22 = (uint *)(uVar15 + 0x10 + (long)puVar18 & (uVar15 ^ 0xffffffffffffffff));
  puVar24 = (uint *)(uVar15 + 0x10 + (long)puVar25 & (uVar15 ^ 0xffffffffffffffff));
  uVar4 = *(uint *)(lVar27 + 0x54);
  uVar19 = ~uVar13;
  uVar15 = *(long *)(lVar27 + 0x40) + uVar13;
  sVar1 = (uVar15 & (uVar13 ^ 0xffffffffffffffff)) + *(long *)(lVar26 + 0x40);
  if (uVar3 == 0 && uVar4 == 0) {
    uVar28 = (uint)sVar1;
    uVar14 = uVar28 << 3;
    if (*(byte *)((long)puVar22 + sVar1) != 0) {
      uVar2 = 0;
      if (uVar28 < 4) {
        uVar2 = *(byte *)((long)puVar22 + sVar1) - 1 << (ulong)(uVar14 & 0x1f);
      }
      if (uVar28 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = 4;
        if (uVar28 < 4) {
          uVar16 = uVar28;
        }
        if ((int)uVar16 < 3) {
          if (uVar16 == 1) {
            uVar16 = (uint)(byte)*puVar22;
          }
          else {
            uVar16 = (uint)(ushort)*puVar22;
          }
        }
        else if (uVar16 == 3) {
          uVar16 = (uint)(uint3)*puVar22;
        }
        else {
          uVar16 = *puVar22;
        }
      }
      if ((uVar16 | uVar2) != 0xffffffff) {
        if (*(byte *)((long)puVar24 + sVar1) == 0) {
LAB_100714d20:
          (**(code **)(lVar27 + 0x20))(puVar22,puVar24,lVar17);
          (**(code **)(lVar26 + 0x20))
                    ((ulong)(uVar15 + (long)puVar22) & uVar19,
                     (ulong)(uVar15 + (long)puVar24) & uVar19,lVar9);
          if (uVar3 == 0 && uVar4 == 0) {
            *(byte *)((long)puVar22 + sVar1) = 0;
            return param_1;
          }
          return param_1;
        }
        uVar2 = 0;
        if (uVar28 < 4) {
          uVar2 = *(byte *)((long)puVar24 + sVar1) - 1 << (ulong)(uVar14 & 0x1f);
        }
        if (uVar28 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = 4;
          if (uVar28 < 4) {
            uVar14 = uVar28;
          }
          if ((int)uVar14 < 3) {
            if (uVar14 == 1) {
              uVar14 = (uint)(byte)*puVar24;
            }
            else {
              uVar14 = (uint)(ushort)*puVar24;
            }
          }
          else if (uVar14 == 3) {
            uVar14 = (uint)(uint3)*puVar24;
          }
          else {
            uVar14 = *puVar24;
          }
        }
        if ((uVar14 | uVar2) == 0xffffffff) goto LAB_100714d20;
        goto LAB_100714cbc;
      }
    }
    if (*(byte *)((long)puVar24 + sVar1) != 0) {
      uVar2 = 0;
      if (uVar28 < 4) {
        uVar2 = *(byte *)((long)puVar24 + sVar1) - 1 << (ulong)(uVar14 & 0x1f);
      }
      if (uVar28 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = 4;
        if (uVar28 < 4) {
          uVar14 = uVar28;
        }
        if ((int)uVar14 < 3) {
          if (uVar14 == 1) {
            uVar14 = (uint)(byte)*puVar24;
          }
          else {
            uVar14 = (uint)(ushort)*puVar24;
          }
        }
        else if (uVar14 == 3) {
          uVar14 = (uint)(uint3)*puVar24;
        }
        else {
          uVar14 = *puVar24;
        }
      }
      if ((uVar14 | uVar2) != 0xffffffff) goto LAB_100714c98;
    }
LAB_100714cd4:
    (**(code **)(lVar27 + 0x28))(puVar22,puVar24,lVar17);
    (**(code **)(lVar26 + 0x28))
              ((ulong)(uVar15 + (long)puVar22) & uVar19,(ulong)(uVar15 + (long)puVar24) & uVar19,
               lVar9);
  }
  else {
    if (uVar4 < uVar3) {
      pcVar20 = *(code **)(lVar26 + 0x30);
      uVar13 = (ulong)(uVar15 + (long)puVar22) & uVar19;
      (*pcVar20)(uVar13,uVar3,lVar9);
      iVar7 = (int)uVar13;
      uVar13 = (ulong)(uVar15 + (long)puVar24) & uVar19;
      (*pcVar20)(uVar13,uVar3,lVar9);
      iVar8 = (int)uVar13;
    }
    else {
      pcVar20 = *(code **)(lVar27 + 0x30);
      puVar11 = puVar22;
      (*pcVar20)(puVar22,uVar4,lVar17);
      puVar12 = puVar24;
      (*pcVar20)(puVar24,uVar4,lVar17);
      iVar8 = (int)puVar12;
      iVar7 = (int)puVar11;
    }
    if (iVar7 == 0) {
      if (iVar8 == 0) goto LAB_100714cd4;
LAB_100714c98:
      (**(code **)(lVar27 + 8))(puVar22,lVar17);
      (**(code **)(lVar26 + 8))((ulong)(uVar15 + (long)puVar22) & uVar19,lVar9);
    }
    else if (iVar8 == 0) goto LAB_100714d20;
LAB_100714cbc:
    if (uVar3 == 0 && uVar4 == 0) {
      sVar1 = sVar1 + 1;
    }
    _memcpy(puVar22,puVar24,sVar1);
  }
  return param_1;
}



/* Address: 0x100714d7c | FUN_100714d7c */

uint * FUN_100714d7c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar22 = *(undefined8 *)(param_3 + 0x28);
  uVar23 = *(undefined8 *)(param_3 + 0x10);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar22,uVar23,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar20 = *(long *)(lVar9 + -8);
  uVar15 = *(uint *)(lVar20 + 0x54);
  lVar21 = *(long *)(param_3 + 0x18);
  lVar24 = *(long *)(lVar21 + -8);
  uVar4 = *(uint *)(lVar24 + 0x54);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar22,uVar23,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar14 = *(long *)(lVar10 + -8);
  uVar5 = *(uint *)(lVar14 + 0x54);
  uVar3 = uVar5;
  if (uVar5 <= uVar4) {
    uVar3 = uVar4;
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar3 - 1;
  }
  uVar1 = uVar15;
  if (uVar15 <= uVar2) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1;
  if (uVar1 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar16 = *(long *)(lVar14 + 0x40);
  if (uVar3 == 0) {
    lVar16 = lVar16 + 1;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar17 = (ulong)*(uint *)(lVar14 + 0x50) & 0xff;
  uVar18 = (ulong)(*(uint *)(lVar14 + 0x50) & 0xff | (uint)*(byte *)(lVar24 + 0x50));
  uVar13 = *(long *)(lVar24 + 0x40) + uVar17;
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_100714efc;
  lVar16 = lVar16 + (uVar13 & (uVar17 ^ 0xffffffffffffffff)) +
           (uVar18 + (*(long *)(lVar20 + 0x40) + 7U & 0xfffffffffffffff8) + 0x10 &
           (uVar18 ^ 0xffffffffffffffff));
  uVar19 = (uint)lVar16;
  uVar6 = uVar19 << 3;
  if (uVar19 < 4) {
    uVar11 = (param_2 - uVar2) + ~(-1 << (ulong)(uVar6 & 0x1f)) >> (ulong)(uVar6 & 0x1f);
    if (uVar11 < 0xff) {
      if (uVar11 == 0) goto LAB_100714efc;
      goto LAB_100714ebc;
    }
    if (uVar11 < 0xffff) {
      uVar11 = (uint)*(ushort *)((long)param_1 + lVar16);
    }
    else {
      uVar11 = *(uint *)((long)param_1 + lVar16);
    }
  }
  else {
LAB_100714ebc:
    uVar11 = (uint)*(byte *)((long)param_1 + lVar16);
  }
  if (uVar11 != 0) {
    uVar3 = 0;
    if (uVar19 < 4) {
      uVar3 = uVar11 - 1 << (ulong)(uVar6 & 0x1f);
    }
    if (uVar19 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = 4;
      if (uVar19 < 4) {
        uVar15 = uVar19;
      }
      if ((int)uVar15 < 3) {
        if (uVar15 == 1) {
          uVar15 = (uint)(byte)*param_1;
        }
        else {
          uVar15 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar15 == 3) {
        uVar15 = (uint)(uint3)*param_1;
      }
      else {
        uVar15 = *param_1;
      }
    }
    return (uint *)(ulong)(uVar2 + (uVar15 | uVar3) + 1);
  }
LAB_100714efc:
  if (uVar15 == uVar2) {
                    /* WARNING: Could not recover jumptable at 0x000100714f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar20 + 0x30))(param_1,uVar15,lVar9);
    return param_1;
  }
  puVar12 = (ulong *)((ulong)((long)param_1 + *(long *)(lVar20 + 0x40) + 7) & 0xfffffffffffffff8);
  if ((int)uVar1 < 0) {
    if (uVar3 == 0) {
      iVar8 = 0;
    }
    else {
      uVar18 = (long)puVar12 + uVar18 + 0x10 & ~uVar18;
      if (uVar4 < uVar5) {
        uVar13 = uVar13 + uVar18 & ~uVar17;
        (**(code **)(lVar14 + 0x30))(uVar13,uVar5,lVar10);
        iVar8 = (int)uVar13;
      }
      else {
        (**(code **)(lVar24 + 0x30))(uVar18,uVar4,lVar21);
        iVar8 = (int)uVar18;
      }
    }
    uVar3 = 0;
    if (iVar8 != 0) {
      uVar3 = iVar8 - 1;
    }
  }
  else {
    uVar13 = *puVar12;
    if (0xfffffffe < uVar13) {
      uVar13 = 0xffffffff;
    }
    uVar3 = (int)uVar13 + 1;
  }
  return (uint *)(ulong)uVar3;
}



/* Address: 0x100715030 | FUN_100715030 */

void FUN_100715030(uint *param_1,ulong param_2,uint param_3,long param_4)

{
  ulong uVar1;
  size_t sVar2;
  uint uVar3;
  size_t sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined *puVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  code *UNRECOVERED_JUMPTABLE;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  ulong uVar21;
  int iVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  puVar9 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar27 = *(undefined8 *)(param_4 + 0x28);
  uVar28 = *(undefined8 *)(param_4 + 0x10);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar27,uVar28,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar23 = *(long *)(lVar11 + -8);
  uVar13 = *(uint *)(lVar23 + 0x54);
  lVar15 = *(long *)(param_4 + 0x18);
  lVar25 = *(long *)(lVar15 + -8);
  uVar14 = *(uint *)(lVar25 + 0x54);
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar27,uVar28,puVar9,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar16 = *(long *)(lVar12 + -8);
  uVar17 = *(uint *)(lVar16 + 0x54);
  uVar3 = uVar17;
  if (uVar17 <= uVar14) {
    uVar3 = uVar14;
  }
  uVar6 = 0;
  if (uVar3 != 0) {
    uVar6 = uVar3 - 1;
  }
  uVar5 = uVar13;
  if (uVar13 <= uVar6) {
    uVar5 = uVar6;
  }
  uVar6 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar6 = 0x7fffffff;
  }
  lVar19 = *(long *)(lVar23 + 0x40);
  uVar18 = (ulong)*(uint *)(lVar16 + 0x50) & 0xff;
  uVar21 = (ulong)(*(uint *)(lVar16 + 0x50) & 0xff | (uint)*(byte *)(lVar25 + 0x50));
  uVar1 = *(long *)(lVar25 + 0x40) + uVar18;
  sVar2 = (uVar1 & (uVar18 ^ 0xffffffffffffffff)) + *(long *)(lVar16 + 0x40);
  sVar4 = sVar2;
  if (uVar3 == 0) {
    sVar4 = sVar2 + 1;
  }
  sVar4 = sVar4 + (uVar21 + (lVar19 + 7U & 0xfffffffffffffff8) + 0x10 &
                  (uVar21 ^ 0xffffffffffffffff));
  uVar26 = (uint)sVar4;
  uVar24 = (uint)param_2;
  bVar10 = 0;
  if (uVar6 <= param_3 && param_3 - uVar6 != 0) {
    if (uVar26 < 4) {
      uVar7 = (param_3 - uVar6) + ~(-1 << (ulong)(uVar26 << 3 & 0x1f)) >>
              (ulong)(uVar26 << 3 & 0x1f);
      bVar10 = 2;
      if (0xfffe < uVar7) {
        bVar10 = 4;
      }
      if (uVar7 < 0xff) {
        bVar10 = uVar7 != 0;
      }
    }
    else {
      bVar10 = 1;
    }
  }
  if (uVar6 < uVar24) {
    uVar24 = uVar24 + ~uVar6;
    if (uVar26 < 4) {
      iVar22 = (uVar24 >> (ulong)(uVar26 << 3 & 0x1f)) + 1;
      if (uVar26 != 0) {
        uVar3 = uVar24 & (-1 << (ulong)(uVar26 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar4);
        uVar8 = (undefined2)uVar3;
        if (uVar26 == 3) {
          *(undefined2 *)param_1 = uVar8;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar26 == 2) {
          *(undefined2 *)param_1 = uVar8;
        }
        else {
          *(char *)param_1 = (char)uVar24;
        }
      }
    }
    else {
      _bzero(param_1,sVar4);
      *param_1 = uVar24;
      iVar22 = 1;
    }
    if (bVar10 < 2) {
      if (bVar10 != 0) {
        *(char *)((long)param_1 + sVar4) = (char)iVar22;
      }
    }
    else if (bVar10 == 2) {
      *(short *)((long)param_1 + sVar4) = (short)iVar22;
    }
    else {
      *(int *)((long)param_1 + sVar4) = iVar22;
    }
  }
  else {
    if (bVar10 < 2) {
      if (bVar10 != 0) {
        *(undefined1 *)((long)param_1 + sVar4) = 0;
      }
    }
    else if (bVar10 == 2) {
      *(undefined2 *)((long)param_1 + sVar4) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar4) = 0;
    }
    if (uVar24 != 0) {
      if (uVar13 == uVar6) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar23 + 0x38);
        lVar15 = lVar11;
        uVar14 = uVar13;
LAB_100715258:
                    /* WARNING: Could not recover jumptable at 0x000100715274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar14,lVar15);
        return;
      }
      puVar20 = (ulong *)((long)param_1 + lVar19 + 7 & 0xfffffffffffffff8);
      if ((int)uVar5 < 0) {
        param_1 = (uint *)((long)puVar20 + uVar21 + 0x10 & ~uVar21);
        if (uVar24 < uVar3) {
          if (uVar14 < uVar17) {
            UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 0x38);
            param_1 = (uint *)(uVar1 + (long)param_1 & ~uVar18);
            param_2 = (ulong)(uVar24 + 1);
            lVar15 = lVar12;
            uVar14 = uVar17;
          }
          else {
            UNRECOVERED_JUMPTABLE = *(code **)(lVar25 + 0x38);
            param_2 = (ulong)(uVar24 + 1);
          }
          goto LAB_100715258;
        }
        uVar13 = (uint)sVar2;
        uVar17 = 0xffffffff;
        if (uVar13 < 4) {
          uVar17 = ~(-1 << (ulong)((uVar13 & 3) << 3));
        }
        if (uVar13 != 0) {
          uVar17 = uVar17 & uVar24 - uVar3;
          uVar3 = 4;
          if (uVar13 < 4) {
            uVar3 = uVar13;
          }
          _bzero(param_1,sVar2);
          if ((int)uVar3 < 3) {
            if (uVar3 == 1) {
              *(char *)param_1 = (char)uVar17;
            }
            else {
              *(short *)param_1 = (short)uVar17;
            }
          }
          else if (uVar3 == 3) {
            *(short *)param_1 = (short)uVar17;
            *(char *)((long)param_1 + 2) = (char)(uVar17 >> 0x10);
          }
          else {
            *param_1 = uVar17;
          }
        }
      }
      else if ((int)uVar24 < 0) {
        *puVar20 = (ulong)(uVar24 & 0x7fffffff);
        puVar20[1] = 0;
      }
      else {
        *puVar20 = (ulong)(uVar24 - 1);
      }
    }
  }
  return;
}


