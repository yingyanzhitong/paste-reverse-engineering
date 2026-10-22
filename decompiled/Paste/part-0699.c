/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007965b0 | FUN_1007965b0 */

void FUN_1007965b0(void)

{
  FUN_100796418();
  return;
}



/* Address: 0x1007965bc | FUN_1007965bc */

void FUN_1007965bc(void)

{
  FUN_1007965c4();
  return;
}



/* Address: 0x1007965c4 | FUN_1007965c4 */

void FUN_1007965c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  
  if (0 < param_3) {
    (**(code **)(*(long *)(param_6 + -8) + 0x20))(param_1,param_2,param_6);
    lVar3 = 0;
    FUN_1007965a4(0,param_6,param_7);
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x24));
    *puVar1 = param_4;
    puVar1[1] = param_5;
    *(undefined1 *)(puVar1 + 2) = param_8;
    *(long *)(param_1 + *(int *)(lVar3 + 0x28)) = param_3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10079665c);
  (*pcVar2)();
}



/* Address: 0x10079665c | thunk_FUN_100796660 */

void thunk_FUN_100796660(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x24);
  lVar2 = 0;
  FUN_1007963ec(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001007966a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,unaff_x20 + iVar1,lVar2);
  return;
}



/* Address: 0x100796660 | FUN_100796660 */

void FUN_100796660(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x24);
  lVar2 = 0;
  FUN_1007963ec(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001007966a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,unaff_x20 + iVar1,lVar2);
  return;
}



/* Address: 0x1007966a8 | FUN_1007966a8 */

void FUN_1007966a8(undefined8 param_1)

{
  FUN_100797c20(param_1,FUN_1007966b4);
  return;
}



/* Address: 0x1007966b4 | FUN_1007966b4 */

void FUN_1007966b4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007966c0 | FUN_1007966c0 */

void FUN_1007966c0(undefined8 param_1,undefined8 param_2)

{
  FUN_100797c84(param_1,param_2,FUN_1007966b4);
  return;
}



/* Address: 0x1007966cc | FUN_1007966cc */

void FUN_1007966cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = 0;
  FUN_1007967fc(0,param_5,param_6);
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  iVar1 = *(int *)(lVar3 + 0x2c);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1 + iVar1,1,1,lVar4);
  uVar5 = 0;
  FUN_1007966b4(0,param_5,param_6);
  _swift_storeEnumTagMultiPayload(param_1 + iVar1,uVar5,0);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,puVar2,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
  iVar1 = *(int *)(lVar3 + 0x24);
  lVar4 = 0;
  FUN_1007963ec(0,param_5,param_6);
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1 + iVar1,param_4,lVar4);
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x28)) = param_3;
  return;
}



/* Address: 0x1007967fc | FUN_1007967fc */

void FUN_1007967fc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100796808 | FUN_100796808 */

void FUN_100796808(undefined8 param_1,long param_2)

{
  Optional OVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined7 extraout_var;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  lVar2 = 0;
  FUN_1007963ec(0,uVar6,uVar5);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,uVar6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x50) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x78) = CONCAT71(extraout_var,OVar1.value);
  lVar2 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar3;
  lVar2 = 0;
  FUN_1007966b4(0,uVar6,uVar5);
  *(long *)(unaff_x22 + 0xb8) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar3;
  _swift_task_switch(FUN_100796988,0,0);
  return;
}



/* Address: 0x100796988 | FUN_100796988 */

void FUN_100796988(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x22;
  long lVar19;
  long lVar20;
  
  uVar17 = *(undefined8 *)(unaff_x22 + 200);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xb8);
  iVar10 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x2c);
  *(int *)(unaff_x22 + 0x138) = iVar10;
  (**(code **)(*(long *)(unaff_x22 + 0xc0) + 0x10))
            (uVar17,*(long *)(unaff_x22 + 0x20) + (long)iVar10,uVar15);
  _swift_getEnumCaseMultiPayload(uVar17,uVar15);
  puVar9 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  iVar10 = (int)uVar17;
  if (iVar10 < 2) {
    if (iVar10 != 0) {
      uVar17 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x30);
      *(undefined8 *)(unaff_x22 + 0x120) = **(undefined8 **)(unaff_x22 + 200);
      puVar9 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
      uVar11 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar15,uVar17,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
      _swift_getAssociatedConformanceWitness
                (uVar15,uVar17,uVar11,puVar9,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar12 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x128) = plVar12;
      *plVar12 = unaff_x22;
      plVar12[1] = (long)FUN_1007974c4;
LAB_100796bdc:
      Swift::AsyncIteratorProtocol::_next();
      return;
    }
    uVar17 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar19 = *(long *)(unaff_x22 + 0x80);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar3 = *(long *)(unaff_x22 + 0x58);
    pcVar13 = *(code **)(lVar19 + 0x20);
    *(code **)(unaff_x22 + 0xd0) = pcVar13;
    (*pcVar13)(uVar18,*(undefined8 *)(unaff_x22 + 200),uVar15);
    (**(code **)(lVar19 + 0x10))(uVar17,uVar18,uVar15);
    pcVar13 = *(code **)(lVar3 + 0x30);
    *(code **)(unaff_x22 + 0xd8) = pcVar13;
    uVar18 = uVar17;
    (*pcVar13)(uVar17,1,uVar11);
    pcVar13 = *(code **)(lVar19 + 8);
    *(code **)(unaff_x22 + 0xe0) = pcVar13;
    (*pcVar13)(uVar17,uVar15);
    puVar9 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
    if ((int)uVar18 == 1) {
      uVar17 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar11 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar15,uVar17,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
      _swift_getAssociatedConformanceWitness
                (uVar15,uVar17,uVar11,puVar9,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar12 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xe8) = plVar12;
      *plVar12 = unaff_x22;
      plVar12[1] = (long)FUN_100796dcc;
      goto LAB_100796bdc;
    }
    pcVar13 = *(code **)(unaff_x22 + 0xd8);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x50);
    (**(code **)(unaff_x22 + 0xd0))
              (uVar17,*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0x78));
    (*pcVar13)(uVar17,1,uVar15);
    lVar19 = *(long *)(unaff_x22 + 0x58);
    if ((int)uVar17 != 1) {
      iVar10 = *(int *)(unaff_x22 + 0x138);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xb8);
      lVar20 = *(long *)(unaff_x22 + 0xc0);
      lVar3 = *(long *)(unaff_x22 + 0x18);
      lVar8 = *(long *)(unaff_x22 + 0x20);
      pcVar13 = *(code **)(lVar19 + 0x20);
      (*pcVar13)(*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x98),
                 *(undefined8 *)(unaff_x22 + 0x50));
      lVar19 = *(long *)(lVar8 + *(int *)(lVar3 + 0x28));
      (**(code **)(lVar20 + 8))(lVar8 + iVar10,uVar17);
      if (lVar19 == 1) {
        uVar17 = 2;
      }
      else {
        uVar17 = 1;
        *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138)) = 1;
      }
      uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar19 = *(long *)(unaff_x22 + 0x58);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x10);
      _swift_storeEnumTagMultiPayload
                (*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138),
                 *(undefined8 *)(unaff_x22 + 0xb8),uVar17);
      (*pcVar13)(uVar18,uVar11,uVar15);
      uVar17 = 0;
      goto LAB_100796c14;
    }
    iVar10 = *(int *)(unaff_x22 + 0x138);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar3 = *(long *)(unaff_x22 + 0xc0);
    lVar20 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(unaff_x22 + 0xe0))
              (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x78));
    (**(code **)(lVar3 + 8))(lVar20 + iVar10,uVar17);
    _swift_storeEnumTagMultiPayload(lVar20 + iVar10,uVar17,3);
  }
  else {
    if (iVar10 == 2) {
      uVar17 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar11 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar15,uVar17,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
      _swift_getAssociatedConformanceWitness
                (uVar15,uVar17,uVar11,puVar9,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar12 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xf8) = plVar12;
      *plVar12 = unaff_x22;
      plVar12[1] = (long)FUN_100797044;
      goto LAB_100796bdc;
    }
    lVar19 = *(long *)(unaff_x22 + 0x58);
  }
  uVar17 = 1;
LAB_100796c14:
  uVar16 = *(undefined8 *)(unaff_x22 + 200);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(lVar19 + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar17,1,*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100796cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100796dcc | FUN_100796dcc */

void FUN_100796dcc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xe8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100796e30;
  }
  else {
    pcVar1 = FUN_100797704;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100796e30 | FUN_100796e30 */

void FUN_100796e30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  code *pcVar16;
  long lVar17;
  long lVar18;
  
  pcVar16 = *(code **)(unaff_x22 + 0xd0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(unaff_x22 + 0xe0))(uVar12,uVar14);
  (*pcVar16)(uVar12,uVar11,uVar14);
  pcVar16 = *(code **)(unaff_x22 + 0xd8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(unaff_x22 + 0xd0))
            (uVar11,*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0x78));
  (*pcVar16)(uVar11,1,uVar12);
  lVar17 = *(long *)(unaff_x22 + 0x58);
  if ((int)uVar11 == 1) {
    iVar9 = *(int *)(unaff_x22 + 0x138);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar3 = *(long *)(unaff_x22 + 0xc0);
    lVar18 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(unaff_x22 + 0xe0))
              (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x78));
    (**(code **)(lVar3 + 8))(lVar18 + iVar9,uVar11);
    _swift_storeEnumTagMultiPayload(lVar18 + iVar9,uVar11,3);
    uVar11 = 1;
  }
  else {
    iVar9 = *(int *)(unaff_x22 + 0x138);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar18 = *(long *)(unaff_x22 + 0xc0);
    lVar3 = *(long *)(unaff_x22 + 0x18);
    lVar4 = *(long *)(unaff_x22 + 0x20);
    pcVar16 = *(code **)(lVar17 + 0x20);
    (*pcVar16)(*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x98),
               *(undefined8 *)(unaff_x22 + 0x50));
    lVar17 = *(long *)(lVar4 + *(int *)(lVar3 + 0x28));
    (**(code **)(lVar18 + 8))(lVar4 + iVar9,uVar11);
    if (lVar17 == 1) {
      uVar11 = 2;
    }
    else {
      uVar11 = 1;
      *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138)) = 1;
    }
    uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar17 = *(long *)(unaff_x22 + 0x58);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x10);
    _swift_storeEnumTagMultiPayload
              (*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138),
               *(undefined8 *)(unaff_x22 + 0xb8),uVar11);
    (*pcVar16)(uVar15,uVar14,uVar12);
    uVar11 = 0;
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 200);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(lVar17 + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar11,1,*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100797040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100797044 | FUN_100797044 */

void FUN_100797044(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x100) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xf8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007970a8;
  }
  else {
    pcVar1 = FUN_10079781c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007970a8 | FUN_1007970a8 */

void FUN_1007970a8(void)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  code *pcVar12;
  code *pcVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  
  lVar22 = *(long *)(unaff_x22 + 0xc0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x58);
  uVar16 = uVar19;
  (**(code **)(lVar4 + 0x30))(uVar19,1,uVar11);
  lVar23 = (long)*(int *)(unaff_x22 + 0x138);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xb8);
  if ((int)uVar16 == 1) {
    lVar15 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))(uVar19,*(undefined8 *)(unaff_x22 + 0x78));
    (**(code **)(lVar22 + 8))(lVar15 + lVar23,uVar17);
    _swift_storeEnumTagMultiPayload(lVar15 + lVar23,uVar17,3);
    pcVar12 = *(code **)(lVar4 + 0x38);
    uVar11 = 1;
  }
  else {
    uVar20 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar15 = *(long *)(unaff_x22 + 0x40);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar2 = *(long *)(unaff_x22 + 0x18);
    lVar5 = *(long *)(unaff_x22 + 0x20);
    pcVar13 = *(code **)(lVar4 + 0x20);
    (*pcVar13)(uVar20,uVar19,uVar11);
    (**(code **)(lVar22 + 8))(lVar5 + lVar23,uVar17);
    (**(code **)(lVar4 + 0x10))(lVar5 + lVar23,uVar20,uVar11);
    pcVar12 = *(code **)(lVar4 + 0x38);
    *(code **)(unaff_x22 + 0x108) = pcVar12;
    (*pcVar12)(lVar5 + lVar23,0,1,uVar11);
    _swift_storeEnumTagMultiPayload(lVar5 + lVar23,uVar17,0);
    (**(code **)(lVar15 + 0x10))(uVar16,lVar5 + *(int *)(lVar2 + 0x24),uVar21);
    _swift_getEnumCaseMultiPayload(uVar16,uVar21);
    if ((int)uVar16 == 0) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x10);
      (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))(*(undefined8 *)(unaff_x22 + 0x68),uVar11);
      (*pcVar13)(uVar17,uVar16,uVar11);
    }
    else {
      if ((int)uVar16 != 1) {
        piVar3 = (int *)**(undefined8 **)(unaff_x22 + 0x48);
        *(undefined8 *)(unaff_x22 + 0x110) = (*(undefined8 **)(unaff_x22 + 0x48))[1];
        iVar1 = *piVar3;
        plVar10 = (long *)(ulong)(uint)piVar3[1];
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x118) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_100797374;
                    /* WARNING: Could not recover jumptable at 0x000100797370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar3))(plVar10,*(undefined8 *)(unaff_x22 + 0x10));
        return;
      }
      uVar17 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar4 = *(long *)(unaff_x22 + 0x58);
      uVar16 = (*(undefined8 **)(unaff_x22 + 0x48))[1];
      (*(code *)**(undefined8 **)(unaff_x22 + 0x48))(*(undefined8 *)(unaff_x22 + 0x10));
      _swift_release(uVar16);
      (**(code **)(lVar4 + 8))(uVar17,uVar11);
    }
    uVar11 = 0;
  }
  uVar18 = *(undefined8 *)(unaff_x22 + 200);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x48);
  (*pcVar12)(*(undefined8 *)(unaff_x22 + 0x10),uVar11,1,*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar21);
                    /* WARNING: Could not recover jumptable at 0x000100797310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100797374 | FUN_100797374 */

void FUN_100797374(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x118));
  _swift_task_switch(FUN_1007973c4,0,0);
  return;
}



/* Address: 0x1007973c4 | FUN_1007973c4 */

void FUN_1007973c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar5 = *(long *)(unaff_x22 + 0x58);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x110));
  (**(code **)(lVar5 + 8))(uVar11,uVar1);
  uVar12 = *(undefined8 *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(unaff_x22 + 0x108))
            (*(undefined8 *)(unaff_x22 + 0x10),0,1,*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001007974c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007974c4 | FUN_1007974c4 */

void FUN_1007974c4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x130) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x128));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100797528;
  }
  else {
    pcVar1 = FUN_10079791c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100797528 | FUN_100797528 */

void FUN_100797528(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  code *pcVar16;
  long lVar17;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar15 = *(long *)(unaff_x22 + 0x58);
  uVar8 = uVar11;
  (**(code **)(lVar15 + 0x30))(uVar11,1,uVar9);
  if ((int)uVar8 == 1) {
    iVar7 = *(int *)(unaff_x22 + 0x138);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar13 = *(long *)(unaff_x22 + 0xc0);
    lVar17 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))(uVar11,*(undefined8 *)(unaff_x22 + 0x78));
    (**(code **)(lVar13 + 8))(lVar17 + iVar7,uVar9);
    _swift_storeEnumTagMultiPayload(lVar17 + iVar7,uVar9,3);
    uVar9 = 1;
  }
  else {
    lVar13 = *(long *)(unaff_x22 + 0x120);
    pcVar16 = *(code **)(lVar15 + 0x20);
    (*pcVar16)(*(undefined8 *)(unaff_x22 + 0x60),uVar11,uVar9);
    lVar15 = lVar13 + 1;
    if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100797704);
      (*pcVar16)();
    }
    lVar13 = *(long *)(*(long *)(unaff_x22 + 0x20) +
                      (long)*(int *)(*(long *)(unaff_x22 + 0x18) + 0x28));
    (**(code **)(*(long *)(unaff_x22 + 0xc0) + 8))
              (*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138),
               *(undefined8 *)(unaff_x22 + 0xb8));
    if (lVar13 == lVar15) {
      uVar9 = 2;
    }
    else {
      *(long *)(*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138)) = lVar15;
      uVar9 = 1;
    }
    lVar15 = *(long *)(unaff_x22 + 0x58);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x10);
    _swift_storeEnumTagMultiPayload
              (*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138),
               *(undefined8 *)(unaff_x22 + 0xb8),uVar9);
    (*pcVar16)(uVar14,uVar8,uVar11);
    uVar9 = 0;
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 200);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(lVar15 + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar9,1,*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001007976fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100797704 | FUN_100797704 */

void FUN_100797704(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  
  pcVar12 = *(code **)(unaff_x22 + 0xe0);
  iVar7 = *(int *)(unaff_x22 + 0x138);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar13 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0xc0) + 8))(lVar13 + iVar7,uVar1);
  _swift_storeEnumTagMultiPayload(lVar13 + iVar7,uVar1,3);
  _swift_willThrow();
  (*pcVar12)(uVar9,uVar11);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 200));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100797818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10079781c | FUN_10079781c */

void FUN_10079781c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  
  iVar9 = *(int *)(unaff_x22 + 0x138);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar12 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0xc0) + 8))(lVar12 + iVar9,uVar1);
  _swift_storeEnumTagMultiPayload(lVar12 + iVar9,uVar1,3);
  _swift_willThrow();
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 200));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100797918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10079791c | FUN_10079791c */

void FUN_10079791c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  
  iVar9 = *(int *)(unaff_x22 + 0x138);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar12 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0xc0) + 8))(lVar12 + iVar9,uVar1);
  _swift_storeEnumTagMultiPayload(lVar12 + iVar9,uVar1,3);
  _swift_willThrow();
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 200));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100797a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100797a1c | FUN_100797a1c */

void FUN_100797a1c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100796808(plVar1,param_1,param_2);
  return;
}



/* Address: 0x100797a84 | FUN_100797a84 */

void FUN_100797a84(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar1 = *(long *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = 0;
  local_68 = param_1;
  FUN_1007963ec(0,lVar1,uVar2);
  lVar9 = *(long *)(lVar3 + -8);
  puVar8 = auStack_70 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(lVar1 + -8);
  lVar5 = (long)puVar8 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,lVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar4 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  (**(code **)(lVar7 + 0x10))(lVar5);
  Swift::AsyncSequence::_makeAsyncIterator();
  uVar6 = *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x28));
  (**(code **)(lVar9 + 0x10))(puVar8,unaff_x20 + *(int *)(param_2 + 0x24),lVar3);
  FUN_1007966cc(local_68,lVar5 - (lVar4 + 0xfU & 0xfffffffffffffff0),uVar6,puVar8,lVar1,uVar2);
  return;
}



/* Address: 0x100797bb8 | FUN_100797bb8 */

void FUN_100797bb8(undefined8 param_1,undefined8 param_2)

{
  FUN_100706840(param_1,param_2,FUN_100797a84);
  return;
}



/* Address: 0x100797bc4 | thunk_FUN_100797bc8 */

undefined8 thunk_FUN_100797bc8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x24));
  uVar2 = *puVar1;
  FUN_1001eebf0(uVar2,puVar1[1],*(undefined1 *)(puVar1 + 2));
  return uVar2;
}



/* Address: 0x100797bc8 | FUN_100797bc8 */

undefined8 FUN_100797bc8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x24));
  uVar2 = *puVar1;
  FUN_1001eebf0(uVar2,puVar1[1],*(undefined1 *)(puVar1 + 2));
  return uVar2;
}



/* Address: 0x100797c14 | FUN_100797c14 */

void FUN_100797c14(undefined8 param_1)

{
  FUN_100797c20(param_1,FUN_100797c6c);
  return;
}



/* Address: 0x100797c20 | FUN_100797c20 */

void FUN_100797c20(undefined8 param_1,long param_2,code *param_3)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x2c);
  lVar2 = 0;
  (*param_3)(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000100797c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,unaff_x20 + iVar1,lVar2);
  return;
}



/* Address: 0x100797c6c | FUN_100797c6c */

void FUN_100797c6c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100797c78 | FUN_100797c78 */

void FUN_100797c78(undefined8 param_1,undefined8 param_2)

{
  FUN_100797c84(param_1,param_2,FUN_100797c6c);
  return;
}



/* Address: 0x100797c84 | FUN_100797c84 */

void FUN_100797c84(undefined8 param_1,long param_2,code *param_3)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x2c);
  lVar2 = 0;
  (*param_3)(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000100797cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x28))(unaff_x20 + iVar1,param_1,lVar2);
  return;
}



/* Address: 0x100797cd4 | FUN_100797cd4 */

void FUN_100797cd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = 0;
  FUN_100797dfc(0,param_7,param_8);
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  iVar2 = *(int *)(lVar4 + 0x2c);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + iVar2,1,1,lVar5);
  uVar6 = 0;
  FUN_100797c6c(0,param_7,param_8);
  _swift_storeEnumTagMultiPayload(param_1 + iVar2,uVar6,0);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_7,puVar3,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,param_2,lVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x24));
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined1 *)(puVar1 + 2) = param_6;
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x28)) = param_3;
  return;
}



/* Address: 0x100797dfc | FUN_100797dfc */

void FUN_100797dfc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100797e08 | FUN_100797e08 */

void FUN_100797e08(undefined8 param_1,long param_2)

{
  Optional OVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined7 extraout_var;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar6,uVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar4;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x60) = CONCAT71(extraout_var,OVar1.value);
  lVar2 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar4;
  lVar2 = 0;
  FUN_100797c6c(0,uVar5,uVar6);
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar4;
  _swift_task_switch(FUN_100797f58,0,0);
  return;
}



/* Address: 0x100797f58 | FUN_100797f58 */

void FUN_100797f58(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x22;
  long lVar18;
  long lVar19;
  
  uVar16 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
  iVar9 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x2c);
  *(int *)(unaff_x22 + 0x138) = iVar9;
  (**(code **)(*(long *)(unaff_x22 + 0xa8) + 0x10))
            (uVar16,*(long *)(unaff_x22 + 0x20) + (long)iVar9,uVar14);
  _swift_getEnumCaseMultiPayload(uVar16,uVar14);
  puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  iVar9 = (int)uVar16;
  if (iVar9 < 2) {
    if (iVar9 != 0) {
      uVar16 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x30);
      *(undefined8 *)(unaff_x22 + 0x120) = **(undefined8 **)(unaff_x22 + 0xb0);
      puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
      uVar10 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar16,uVar14,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
      _swift_getAssociatedConformanceWitness
                (uVar16,uVar14,uVar10,puVar8,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar11 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x128) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_100798afc;
LAB_1007981ac:
      Swift::AsyncIteratorProtocol::_next();
      return;
    }
    uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar18 = *(long *)(unaff_x22 + 0x68);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar2 = *(long *)(unaff_x22 + 0x40);
    pcVar12 = *(code **)(lVar18 + 0x20);
    *(code **)(unaff_x22 + 0xb8) = pcVar12;
    (*pcVar12)(uVar17,*(undefined8 *)(unaff_x22 + 0xb0),uVar14);
    (**(code **)(lVar18 + 0x10))(uVar16,uVar17,uVar14);
    pcVar12 = *(code **)(lVar2 + 0x30);
    *(code **)(unaff_x22 + 0xc0) = pcVar12;
    uVar17 = uVar16;
    (*pcVar12)(uVar16,1,uVar10);
    pcVar12 = *(code **)(lVar18 + 8);
    *(code **)(unaff_x22 + 200) = pcVar12;
    (*pcVar12)(uVar16,uVar14);
    puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
    if ((int)uVar17 == 1) {
      uVar16 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar10 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar16,uVar14,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
      _swift_getAssociatedConformanceWitness
                (uVar16,uVar14,uVar10,puVar8,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar11 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xd0) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_100798394;
      goto LAB_1007981ac;
    }
    pcVar12 = *(code **)(unaff_x22 + 0xc0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
    (**(code **)(unaff_x22 + 0xb8))
              (uVar16,*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x60));
    (*pcVar12)(uVar16,1,uVar14);
    lVar18 = *(long *)(unaff_x22 + 0x40);
    if ((int)uVar16 != 1) {
      iVar9 = *(int *)(unaff_x22 + 0x138);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
      lVar19 = *(long *)(unaff_x22 + 0xa8);
      lVar2 = *(long *)(unaff_x22 + 0x18);
      lVar7 = *(long *)(unaff_x22 + 0x20);
      pcVar12 = *(code **)(lVar18 + 0x20);
      (*pcVar12)(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x80),
                 *(undefined8 *)(unaff_x22 + 0x38));
      lVar18 = *(long *)(lVar7 + *(int *)(lVar2 + 0x28));
      (**(code **)(lVar19 + 8))(lVar7 + iVar9,uVar16);
      if (lVar18 == 1) {
        uVar16 = 2;
      }
      else {
        uVar16 = 1;
        *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138)) = 1;
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
      lVar18 = *(long *)(unaff_x22 + 0x40);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x10);
      _swift_storeEnumTagMultiPayload
                (*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138),
                 *(undefined8 *)(unaff_x22 + 0xa0),uVar16);
      (*pcVar12)(uVar17,uVar10,uVar14);
      uVar16 = 0;
      goto LAB_1007981e4;
    }
    iVar9 = *(int *)(unaff_x22 + 0x138);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar2 = *(long *)(unaff_x22 + 0xa8);
    lVar19 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(unaff_x22 + 200))
              (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x60));
    (**(code **)(lVar2 + 8))(lVar19 + iVar9,uVar16);
    _swift_storeEnumTagMultiPayload(lVar19 + iVar9,uVar16,3);
  }
  else {
    if (iVar9 == 2) {
      uVar16 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar10 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar16,uVar14,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
      _swift_getAssociatedConformanceWitness
                (uVar16,uVar14,uVar10,puVar8,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar11 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xe0) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_100798604;
      goto LAB_1007981ac;
    }
    lVar18 = *(long *)(unaff_x22 + 0x40);
  }
  uVar16 = 1;
LAB_1007981e4:
  uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(lVar18 + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar16,1,*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000100798288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100798394 | FUN_100798394 */

void FUN_100798394(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007983f8;
  }
  else {
    pcVar1 = FUN_100798d34;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007983f8 | FUN_1007983f8 */

void FUN_1007983f8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  code *pcVar15;
  long lVar16;
  long lVar17;
  
  pcVar15 = *(code **)(unaff_x22 + 0xb8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
  (**(code **)(unaff_x22 + 200))(uVar11,uVar13);
  (*pcVar15)(uVar11,uVar10,uVar13);
  pcVar15 = *(code **)(unaff_x22 + 0xc0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(unaff_x22 + 0xb8))
            (uVar10,*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x60));
  (*pcVar15)(uVar10,1,uVar11);
  lVar16 = *(long *)(unaff_x22 + 0x40);
  if ((int)uVar10 == 1) {
    iVar8 = *(int *)(unaff_x22 + 0x138);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar2 = *(long *)(unaff_x22 + 0xa8);
    lVar17 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(unaff_x22 + 200))
              (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x60));
    (**(code **)(lVar2 + 8))(lVar17 + iVar8,uVar10);
    _swift_storeEnumTagMultiPayload(lVar17 + iVar8,uVar10,3);
    uVar10 = 1;
  }
  else {
    iVar8 = *(int *)(unaff_x22 + 0x138);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar17 = *(long *)(unaff_x22 + 0xa8);
    lVar2 = *(long *)(unaff_x22 + 0x18);
    lVar3 = *(long *)(unaff_x22 + 0x20);
    pcVar15 = *(code **)(lVar16 + 0x20);
    (*pcVar15)(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x80),
               *(undefined8 *)(unaff_x22 + 0x38));
    lVar16 = *(long *)(lVar3 + *(int *)(lVar2 + 0x28));
    (**(code **)(lVar17 + 8))(lVar3 + iVar8,uVar10);
    if (lVar16 == 1) {
      uVar10 = 2;
    }
    else {
      uVar10 = 1;
      *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138)) = 1;
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar16 = *(long *)(unaff_x22 + 0x40);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x10);
    _swift_storeEnumTagMultiPayload
              (*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138),
               *(undefined8 *)(unaff_x22 + 0xa0),uVar10);
    (*pcVar15)(uVar14,uVar13,uVar11);
    uVar10 = 0;
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(lVar16 + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar10,1,*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100798600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100798604 | FUN_100798604 */

void FUN_100798604(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xe0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100798668;
  }
  else {
    pcVar1 = FUN_100798e40;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100798668 | FUN_100798668 */

void FUN_100798668(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char cVar8;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  code *pcVar22;
  
  lVar20 = *(long *)(unaff_x22 + 0xa8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar18 = *(long *)(unaff_x22 + 0x40);
  uVar17 = uVar16;
  (**(code **)(lVar18 + 0x30))(uVar16,1,uVar10);
  lVar19 = (long)*(int *)(unaff_x22 + 0x138);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
  if ((int)uVar17 == 1) {
    lVar13 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))(uVar16,*(undefined8 *)(unaff_x22 + 0x60));
    (**(code **)(lVar20 + 8))(lVar13 + lVar19,uVar14);
    _swift_storeEnumTagMultiPayload(lVar13 + lVar19,uVar14,3);
    pcVar22 = *(code **)(lVar18 + 0x38);
    uVar10 = 1;
  }
  else {
    uVar17 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar13 = *(long *)(unaff_x22 + 0x18);
    lVar7 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(lVar18 + 0x20))(uVar17,uVar16,uVar10);
    pcVar21 = *(code **)(lVar20 + 8);
    *(code **)(unaff_x22 + 0xf0) = pcVar21;
    (*pcVar21)(lVar7 + lVar19,uVar14);
    (**(code **)(lVar18 + 0x10))(lVar7 + lVar19,uVar17,uVar10);
    pcVar22 = *(code **)(lVar18 + 0x38);
    *(code **)(unaff_x22 + 0xf8) = pcVar22;
    (*pcVar22)(lVar7 + lVar19,0,1,uVar10);
    _swift_storeEnumTagMultiPayload(lVar7 + lVar19,uVar14,0);
    puVar1 = (undefined8 *)(lVar7 + *(int *)(lVar13 + 0x24));
    UNRECOVERED_JUMPTABLE = (code *)*puVar1;
    *(code **)(unaff_x22 + 0x100) = UNRECOVERED_JUMPTABLE;
    uVar10 = puVar1[1];
    *(undefined8 *)(unaff_x22 + 0x108) = uVar10;
    cVar8 = *(char *)(puVar1 + 2);
    if (cVar8 == '\x01') {
      iVar2 = *(int *)UNRECOVERED_JUMPTABLE;
      plVar9 = (long *)(ulong)*(uint *)(UNRECOVERED_JUMPTABLE + 4);
      _swift_retain(uVar10);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x110) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_10079899c;
                    /* WARNING: Could not recover jumptable at 0x000100798884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(UNRECOVERED_JUMPTABLE + iVar2))(plVar9,*(undefined8 *)(unaff_x22 + 0x10));
      return;
    }
    lVar19 = *(long *)(unaff_x22 + 0xe8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar18 = *(long *)(unaff_x22 + 0x40);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x10);
    _swift_retain(uVar10);
    (*UNRECOVERED_JUMPTABLE)(uVar16);
    (**(code **)(lVar18 + 8))(uVar14,uVar17);
    FUN_1001eebe0(UNRECOVERED_JUMPTABLE,uVar10,cVar8);
    if (lVar19 != 0) {
      iVar2 = *(int *)(unaff_x22 + 0x138);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
      lVar18 = *(long *)(unaff_x22 + 0x20);
      (*pcVar21)(lVar18 + iVar2,uVar10);
      _swift_storeEnumTagMultiPayload(lVar18 + iVar2,uVar10,3);
      _swift_willThrow();
      uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
      _swift_task_dealloc(uVar3);
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(uVar4);
      _swift_task_dealloc(uVar17);
      _swift_task_dealloc(uVar5);
      _swift_task_dealloc(uVar14);
      _swift_task_dealloc(uVar6);
      _swift_task_dealloc(uVar16);
      _swift_task_dealloc(uVar12);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_100798974;
    }
    uVar10 = 0;
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x48);
  (*pcVar22)(*(undefined8 *)(unaff_x22 + 0x10),uVar10,1,*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_100798974:
                    /* WARNING: Could not recover jumptable at 0x000100798990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x10079899c | FUN_10079899c */

void FUN_10079899c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x118) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x110));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100798a00;
  }
  else {
    pcVar1 = FUN_100798f30;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100798a00 | FUN_100798a00 */

void FUN_100798a00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar4 = *(long *)(unaff_x22 + 0x40);
  FUN_1001eebe0(*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x108),1);
  (**(code **)(lVar4 + 8))(uVar10,uVar1);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(unaff_x22 + 0xf8))
            (*(undefined8 *)(unaff_x22 + 0x10),0,1,*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100798af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100798afc | FUN_100798afc */

void FUN_100798afc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x130) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x128));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100798b60;
  }
  else {
    pcVar1 = FUN_100799044;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100798b60 | FUN_100798b60 */

void FUN_100798b60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x22;
  long lVar14;
  code *pcVar15;
  long lVar16;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar14 = *(long *)(unaff_x22 + 0x40);
  uVar7 = uVar10;
  (**(code **)(lVar14 + 0x30))(uVar10,1,uVar8);
  if ((int)uVar7 == 1) {
    iVar6 = *(int *)(unaff_x22 + 0x138);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar12 = *(long *)(unaff_x22 + 0xa8);
    lVar16 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))(uVar10,*(undefined8 *)(unaff_x22 + 0x60));
    (**(code **)(lVar12 + 8))(lVar16 + iVar6,uVar8);
    _swift_storeEnumTagMultiPayload(lVar16 + iVar6,uVar8,3);
    uVar8 = 1;
  }
  else {
    lVar12 = *(long *)(unaff_x22 + 0x120);
    pcVar15 = *(code **)(lVar14 + 0x20);
    (*pcVar15)(*(undefined8 *)(unaff_x22 + 0x48),uVar10,uVar8);
    lVar14 = lVar12 + 1;
    if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x100798d34);
      (*pcVar15)();
    }
    lVar12 = *(long *)(*(long *)(unaff_x22 + 0x20) +
                      (long)*(int *)(*(long *)(unaff_x22 + 0x18) + 0x28));
    (**(code **)(*(long *)(unaff_x22 + 0xa8) + 8))
              (*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138),
               *(undefined8 *)(unaff_x22 + 0xa0));
    if (lVar12 == lVar14) {
      uVar8 = 2;
    }
    else {
      *(long *)(*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138)) = lVar14;
      uVar8 = 1;
    }
    lVar14 = *(long *)(unaff_x22 + 0x40);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x10);
    _swift_storeEnumTagMultiPayload
              (*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138),
               *(undefined8 *)(unaff_x22 + 0xa0),uVar8);
    (*pcVar15)(uVar13,uVar7,uVar10);
    uVar8 = 0;
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(lVar14 + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar8,1,*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100798d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100798d34 | FUN_100798d34 */

void FUN_100798d34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  
  pcVar11 = *(code **)(unaff_x22 + 200);
  iVar7 = *(int *)(unaff_x22 + 0x138);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar12 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0xa8) + 8))(lVar12 + iVar7,uVar1);
  _swift_storeEnumTagMultiPayload(lVar12 + iVar7,uVar1,3);
  _swift_willThrow();
  (*pcVar11)(uVar8,uVar10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100798e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100798e40 | FUN_100798e40 */

void FUN_100798e40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  iVar9 = *(int *)(unaff_x22 + 0x138);
  lVar11 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0xa8) + 8))(lVar11 + iVar9,uVar1);
  _swift_storeEnumTagMultiPayload(lVar11 + iVar9,uVar1,3);
  _swift_willThrow();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100798f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100798f30 | FUN_100798f30 */

void FUN_100798f30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar11 = *(long *)(unaff_x22 + 0x40);
  FUN_1001eebe0(*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x108),1);
  (**(code **)(lVar11 + 8))(uVar9,uVar8);
  iVar7 = *(int *)(unaff_x22 + 0x138);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar11 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(unaff_x22 + 0xf0))(lVar11 + iVar7,uVar8);
  _swift_storeEnumTagMultiPayload(lVar11 + iVar7,uVar8,3);
  _swift_willThrow();
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100799040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100799044 | FUN_100799044 */

void FUN_100799044(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  
  iVar9 = *(int *)(unaff_x22 + 0x138);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar11 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0xa8) + 8))(lVar11 + iVar9,uVar1);
  _swift_storeEnumTagMultiPayload(lVar11 + iVar9,uVar1,3);
  _swift_willThrow();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100799134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100799138 | FUN_100799138 */

void FUN_100799138(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100797e08(plVar1,param_1,param_2);
  return;
}



/* Address: 0x1007991a0 | FUN_1007991a0 */

void FUN_1007991a0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  
  lVar2 = *(long *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  lVar9 = *(long *)(lVar2 + -8);
  lVar8 = *(long *)(lVar9 + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar7 = *(long *)(*(long *)(lVar7 + -8) + 0x40);
  (**(code **)(lVar9 + 0x10))(&stack0xffffffffffffffb0 + -(lVar8 + 0xfU & 0xfffffffffffffff0));
  Swift::AsyncSequence::_makeAsyncIterator();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x24));
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = *(undefined1 *)(puVar1 + 2);
  FUN_100797cd4(param_1,(long)(&stack0xffffffffffffffb0 + -(lVar8 + 0xfU & 0xfffffffffffffff0)) -
                        (lVar7 + 0xfU & 0xfffffffffffffff0),
                *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x28)),uVar3,uVar5,uVar6,lVar2,uVar4)
  ;
  FUN_1001eebf0(uVar3,uVar5,uVar6);
  return;
}



/* Address: 0x1007992a4 | FUN_1007992a4 */

void FUN_1007992a4(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c779b0,param_1);
  return;
}



/* Address: 0x1007992b4 | FUN_1007992b4 */

void FUN_1007992b4(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c77a50,param_1);
  return;
}



/* Address: 0x1007992c4 | FUN_1007992c4 */

void FUN_1007992c4(undefined8 param_1,undefined8 param_2)

{
  FUN_100706840(param_1,param_2,FUN_1007991a0);
  return;
}



/* Address: 0x1007992d0 | FUN_1007992d0 */

void FUN_1007992d0(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long local_38;
  long local_30;
  undefined *puStack_28;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar3 < 0x40) {
    local_38 = *(long *)(uVar1 - 8) + 0x40;
    lVar2 = 0x13f;
    FUN_1007963ec(0x13f,uVar1,*(undefined8 *)(param_1 + 0x18));
    if (uVar1 < 0x40) {
      local_30 = *(long *)(lVar2 + -8) + 0x40;
      puStack_28 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
      _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x20);
    }
  }
  return;
}



/* Address: 0x10079936c | FUN_10079936c */

long * FUN_10079936c(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar15 = *(long *)(lVar4 + -8);
  lVar16 = *(long *)(lVar15 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar14 = *(long *)(lVar3 + -8);
  uVar10 = (ulong)*(uint *)(lVar14 + 0x50) & 0xf8 | 7;
  uVar11 = *(ulong *)(lVar14 + 0x40);
  if (uVar11 < 0x11) {
    uVar11 = 0x10;
  }
  uVar8 = *(uint *)(lVar14 + 0x50) | *(uint *)(lVar15 + 0x50);
  if ((uVar8 & 0x1000f8) != 0 ||
      0x18 < (uVar11 + (lVar16 + uVar10 & (uVar10 ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8) +
             8) {
    uVar11 = (ulong)(uVar8 & 0xf8 | 7);
    lVar4 = *param_2;
    *param_1 = lVar4;
    _swift_retain();
    return (long *)(lVar4 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
  }
  (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar4);
  uVar10 = (long)param_1 + lVar16 + 7;
  uVar1 = (long)param_2 + lVar16 + 7;
  puVar6 = (uint *)(uVar1 & 0xfffffffffffffff8);
  bVar2 = *(byte *)((long)puVar6 + uVar11);
  uVar8 = (uint)bVar2;
  if (2 < bVar2) {
    uVar13 = (uint)uVar11;
    uVar9 = 4;
    if (uVar13 < 4) {
      uVar9 = uVar13;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1007994cc;
      uVar9 = (uint)(byte)*puVar6;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar6;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar6;
    }
    else {
      uVar9 = *puVar6;
    }
    uVar8 = uVar9 | bVar2 - 3 << (ulong)((uVar13 & 3) << 3);
    if (3 < uVar13) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 3;
  }
LAB_1007994cc:
  puVar12 = (undefined8 *)(uVar10 & 0xfffffffffffffff8);
  if (uVar8 == 2) {
    uVar5 = *(undefined8 *)(puVar6 + 2);
    uVar17 = *(undefined8 *)puVar6;
    puVar12[1] = *(undefined8 *)(puVar6 + 2);
    *puVar12 = uVar17;
    uVar7 = 2;
  }
  else {
    if (uVar8 != 1) {
      (**(code **)(lVar14 + 0x10))(puVar12,puVar6,lVar3);
      *(undefined1 *)((long)puVar12 + uVar11) = 0;
      goto LAB_100799528;
    }
    uVar5 = *(undefined8 *)(puVar6 + 2);
    uVar17 = *(undefined8 *)puVar6;
    puVar12[1] = *(undefined8 *)(puVar6 + 2);
    *puVar12 = uVar17;
    uVar7 = 1;
  }
  *(undefined1 *)((long)puVar12 + uVar11) = uVar7;
  _swift_retain(uVar5);
LAB_100799528:
  *(undefined8 *)((uVar10 | 7) + uVar11 + 1 & 0xfffffffffffffff8) =
       *(undefined8 *)((uVar1 | 7) + uVar11 + 1 & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x100799564 | FUN_100799564 */

void FUN_100799564(long param_1,long param_2)

{
  byte bVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(param_2 + 0x10);
  lVar9 = *(long *)(lVar8 + -8);
  (**(code **)(lVar9 + 8))(param_1,lVar8);
  lVar3 = *(long *)(lVar9 + 0x40);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),lVar8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar8 = *(long *)(lVar9 + -8);
  uVar5 = (ulong)*(uint *)(lVar8 + 0x50) & 0xf8 | 7;
  puVar2 = (uint *)(lVar3 + param_1 + uVar5 & (uVar5 ^ 0xffffffffffffffff));
  uVar5 = *(ulong *)(lVar8 + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  bVar1 = *(byte *)((long)puVar2 + uVar5);
  uVar6 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = (uint)uVar5;
    uVar7 = 4;
    if (uVar4 < 4) {
      uVar7 = uVar4;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_100799658;
      uVar7 = (uint)(byte)*puVar2;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*puVar2;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*puVar2;
    }
    else {
      uVar7 = *puVar2;
    }
    uVar6 = uVar7 | bVar1 - 3 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 3;
  }
LAB_100799658:
  if ((uVar6 != 2) && (uVar6 != 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010079968c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 8))(puVar2,lVar9);
    return;
  }
  _swift_release(*(undefined8 *)(puVar2 + 2));
  return;
}



/* Address: 0x100799690 | FUN_100799690 */

long FUN_100799690(long param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar11 = *(long *)(param_3 + 0x10);
  lVar12 = *(long *)(lVar11 + -8);
  (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar11);
  lVar12 = *(long *)(lVar12 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = *(long *)(lVar2 + -8);
  uVar5 = (ulong)*(uint *)(lVar11 + 0x50) & 0xf8 | 7;
  lVar12 = lVar12 + uVar5;
  puVar8 = (undefined8 *)(lVar12 + param_1 & (uVar5 ^ 0xffffffffffffffff));
  puVar9 = (uint *)(lVar12 + param_2 & (uVar5 ^ 0xffffffffffffffff));
  uVar5 = *(ulong *)(lVar11 + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  bVar1 = *(byte *)((long)puVar9 + uVar5);
  uVar6 = (uint)bVar1;
  if (2 < bVar1) {
    uVar10 = (uint)uVar5;
    uVar7 = 4;
    if (uVar10 < 4) {
      uVar7 = uVar10;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_100799794;
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
    uVar6 = uVar7 | bVar1 - 3 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 3;
  }
LAB_100799794:
  if (uVar6 == 2) {
    uVar3 = *(undefined8 *)(puVar9 + 2);
    uVar13 = *(undefined8 *)puVar9;
    puVar8[1] = *(undefined8 *)(puVar9 + 2);
    *puVar8 = uVar13;
    uVar4 = 2;
  }
  else {
    if (uVar6 != 1) {
      (**(code **)(lVar11 + 0x10))(puVar8,puVar9,lVar2);
      *(undefined1 *)((long)puVar8 + uVar5) = 0;
      goto LAB_1007997e8;
    }
    uVar3 = *(undefined8 *)(puVar9 + 2);
    uVar13 = *(undefined8 *)puVar9;
    puVar8[1] = *(undefined8 *)(puVar9 + 2);
    *puVar8 = uVar13;
    uVar4 = 1;
  }
  *(undefined1 *)((long)puVar8 + uVar5) = uVar4;
  _swift_retain(uVar3);
LAB_1007997e8:
  *(undefined8 *)(uVar5 + 8 + (long)puVar8 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar5 + 8 + (long)puVar9) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x10079981c | FUN_10079981c */

long FUN_10079981c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  
  lVar8 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar8 + -8);
  (**(code **)(lVar10 + 0x18))(param_1,param_2,lVar8);
  lVar10 = *(long *)(lVar10 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar8 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(uint *)(lVar8 + 0x50) & 0xf8 | 7;
  lVar10 = lVar10 + uVar4;
  puVar9 = (uint *)(lVar10 + param_1 & (uVar4 ^ 0xffffffffffffffff));
  puVar7 = (uint *)(lVar10 + param_2 & (uVar4 ^ 0xffffffffffffffff));
  uVar4 = *(ulong *)(lVar8 + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  if (puVar9 == puVar7) goto LAB_100799a24;
  bVar3 = *(byte *)((long)puVar9 + uVar4);
  uVar5 = (uint)bVar3;
  uVar11 = (uint)uVar4;
  if (2 < bVar3) {
    uVar6 = 4;
    if (uVar11 < 4) {
      uVar6 = uVar11;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10079992c;
      uVar6 = (uint)(byte)*puVar9;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*puVar9;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*puVar9;
    }
    else {
      uVar6 = *puVar9;
    }
    uVar5 = uVar6 | bVar3 - 3 << (ulong)((uVar11 & 3) << 3);
    if (3 < uVar11) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_10079992c:
  if ((uVar5 == 2) || (uVar5 == 1)) {
    _swift_release(*(undefined8 *)(puVar9 + 2));
  }
  else {
    (**(code **)(lVar8 + 8))(puVar9,lVar1);
  }
  bVar3 = *(byte *)((long)puVar7 + uVar4);
  uVar5 = (uint)bVar3;
  if (2 < bVar3) {
    uVar6 = 4;
    if (uVar11 < 4) {
      uVar6 = uVar11;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1007999cc;
      uVar6 = (uint)(byte)*puVar7;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*puVar7;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*puVar7;
    }
    else {
      uVar6 = *puVar7;
    }
    uVar5 = uVar6 | bVar3 - 3 << (ulong)((uVar11 & 3) << 3);
    if (3 < uVar11) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_1007999cc:
  if (uVar5 == 2) {
    uVar2 = *(undefined8 *)(puVar7 + 2);
    uVar12 = *(undefined8 *)puVar7;
    *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar7 + 2);
    *(undefined8 *)puVar9 = uVar12;
    bVar3 = 2;
  }
  else {
    if (uVar5 != 1) {
      (**(code **)(lVar8 + 0x10))(puVar9,puVar7,lVar1);
      *(byte *)((long)puVar9 + uVar4) = 0;
      goto LAB_100799a24;
    }
    uVar2 = *(undefined8 *)(puVar7 + 2);
    uVar12 = *(undefined8 *)puVar7;
    *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar7 + 2);
    *(undefined8 *)puVar9 = uVar12;
    bVar3 = 1;
  }
  *(byte *)((long)puVar9 + uVar4) = bVar3;
  _swift_retain(uVar2);
LAB_100799a24:
  *(undefined8 *)((ulong)((long)puVar9 + uVar4 + 8) & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)((long)puVar7 + uVar4 + 8) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x100799a64 | FUN_100799a64 */

long FUN_100799a64(long param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar10 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(lVar10 + -8);
  (**(code **)(lVar11 + 0x20))(param_1,param_2,lVar10);
  lVar11 = *(long *)(lVar11 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar10,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(uint *)(lVar10 + 0x50) & 0xf8 | 7;
  lVar11 = lVar11 + uVar4;
  puVar7 = (undefined8 *)(lVar11 + param_1 & (uVar4 ^ 0xffffffffffffffff));
  puVar8 = (uint *)(lVar11 + param_2 & (uVar4 ^ 0xffffffffffffffff));
  uVar4 = *(ulong *)(lVar10 + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  bVar1 = *(byte *)((long)puVar8 + uVar4);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar9 = (uint)uVar4;
    uVar6 = 4;
    if (uVar9 < 4) {
      uVar6 = uVar9;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_100799b68;
      uVar6 = (uint)(byte)*puVar8;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*puVar8;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*puVar8;
    }
    else {
      uVar6 = *puVar8;
    }
    uVar5 = uVar6 | bVar1 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_100799b68:
  if (uVar5 == 2) {
    uVar12 = *(undefined8 *)puVar8;
    puVar7[1] = *(undefined8 *)(puVar8 + 2);
    *puVar7 = uVar12;
    uVar3 = 2;
  }
  else if (uVar5 == 1) {
    uVar12 = *(undefined8 *)puVar8;
    puVar7[1] = *(undefined8 *)(puVar8 + 2);
    *puVar7 = uVar12;
    uVar3 = 1;
  }
  else {
    (**(code **)(lVar10 + 0x20))(puVar7,puVar8,lVar2);
    uVar3 = 0;
  }
  *(undefined1 *)((long)puVar7 + uVar4) = uVar3;
  *(undefined8 *)(uVar4 + 8 + (long)puVar7 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar4 + 8 + (long)puVar8) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x100799be4 | FUN_100799be4 */

long FUN_100799be4(long param_1,long param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  
  lVar7 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar7 + -8);
  (**(code **)(lVar9 + 0x28))(param_1,param_2,lVar7);
  lVar9 = *(long *)(lVar9 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar7 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(uint *)(lVar7 + 0x50) & 0xf8 | 7;
  lVar9 = lVar9 + uVar3;
  puVar8 = (uint *)(lVar9 + param_1 & (uVar3 ^ 0xffffffffffffffff));
  puVar6 = (uint *)(lVar9 + param_2 & (uVar3 ^ 0xffffffffffffffff));
  uVar3 = *(ulong *)(lVar7 + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  if (puVar8 == puVar6) goto LAB_100799de0;
  bVar2 = *(byte *)((long)puVar8 + uVar3);
  uVar4 = (uint)bVar2;
  uVar10 = (uint)uVar3;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar10 < 4) {
      uVar5 = uVar10;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100799cf4;
      uVar5 = (uint)(byte)*puVar8;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*puVar8;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*puVar8;
    }
    else {
      uVar5 = *puVar8;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_100799cf4:
  if ((uVar4 == 2) || (uVar4 == 1)) {
    _swift_release(*(undefined8 *)(puVar8 + 2));
  }
  else {
    (**(code **)(lVar7 + 8))(puVar8,lVar1);
  }
  bVar2 = *(byte *)((long)puVar6 + uVar3);
  uVar4 = (uint)bVar2;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar10 < 4) {
      uVar5 = uVar10;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100799d94;
      uVar5 = (uint)(byte)*puVar6;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*puVar6;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*puVar6;
    }
    else {
      uVar5 = *puVar6;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_100799d94:
  if (uVar4 == 2) {
    uVar11 = *(undefined8 *)puVar6;
    *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar6 + 2);
    *(undefined8 *)puVar8 = uVar11;
    bVar2 = 2;
  }
  else if (uVar4 == 1) {
    uVar11 = *(undefined8 *)puVar6;
    *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar6 + 2);
    *(undefined8 *)puVar8 = uVar11;
    bVar2 = 1;
  }
  else {
    (**(code **)(lVar7 + 0x20))(puVar8,puVar6,lVar1);
    bVar2 = 0;
  }
  *(byte *)((long)puVar8 + uVar3) = bVar2;
LAB_100799de0:
  *(undefined8 *)((ulong)((long)puVar8 + uVar3 + 8) & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)((long)puVar6 + uVar3 + 8) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x100799e20 | FUN_100799e20 */

int * FUN_100799e20(int *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar13 = *(long *)(lVar5 + -8);
  uVar6 = *(uint *)(lVar13 + 0x54);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar10 = *(ulong *)(*(long *)(lVar8 + -8) + 0x40);
  if (uVar10 < 0x11) {
    uVar10 = 0x10;
  }
  uVar9 = uVar6;
  if (uVar6 < 0xfe) {
    uVar9 = 0xfd;
  }
  if (param_2 == 0) {
    return (int *)0x0;
  }
  uVar11 = (ulong)*(uint *)(*(long *)(lVar8 + -8) + 0x50) & 0xf8 | 7;
  uVar2 = *(long *)(lVar13 + 0x40) + uVar11;
  if (uVar9 <= param_2 && param_2 - uVar9 != 0) {
    uVar1 = (uVar10 + (uVar2 & (uVar11 ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8) + 8;
    uVar12 = 2;
    uVar4 = uVar12;
    if ((uVar1 & 0xfffffff8) == 0) {
      uVar4 = (param_2 - uVar9) + 1;
    }
    if (0xffff < uVar4) {
      uVar12 = 4;
    }
    if (uVar4 < 0x100) {
      uVar12 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar12;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar12 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
      goto LAB_100799f10;
    }
    else if (uVar3 == 2) {
      uVar12 = (uint)*(ushort *)((long)param_1 + uVar1);
      if (*(ushort *)((long)param_1 + uVar1) != 0) {
LAB_100799f10:
        iVar7 = uVar12 - 1;
        if ((uVar1 & 0xfffffff8) != 0) {
          iVar7 = *param_1;
        }
        return (int *)(ulong)(uVar9 + iVar7 + 1);
      }
    }
    else {
      uVar12 = *(uint *)((long)param_1 + uVar1);
      if (uVar12 != 0) goto LAB_100799f10;
    }
  }
  if (uVar6 < 0xfd) {
    uVar9 = (uint)*(byte *)((uVar2 + (long)param_1 & ~uVar11) + uVar10);
    uVar6 = 0;
    if (2 < uVar9) {
      uVar6 = (uVar9 ^ 0xff) + 1;
    }
    return (int *)(ulong)uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x000100799f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar13 + 0x30))(param_1,uVar6,lVar5);
  return param_1;
}



/* Address: 0x100799fa0 | FUN_100799fa0 */

void FUN_100799fa0(int *param_1,undefined8 param_2,uint param_3,long param_4)

{
  size_t sVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  
  lVar4 = *(long *)(param_4 + 0x10);
  lVar15 = *(long *)(lVar4 + -8);
  uVar5 = *(uint *)(lVar15 + 0x54);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),lVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar7 = *(ulong *)(*(long *)(lVar6 + -8) + 0x40);
  if (uVar7 < 0x11) {
    uVar7 = 0x10;
  }
  uVar8 = uVar5;
  if (uVar5 < 0xfe) {
    uVar8 = 0xfd;
  }
  uVar9 = (ulong)*(uint *)(*(long *)(lVar6 + -8) + 0x50) & 0xf8 | 7;
  uVar2 = *(long *)(lVar15 + 0x40) + uVar9;
  sVar1 = (uVar7 + (uVar2 & (uVar9 ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8) + 8;
  uVar13 = (uint)param_2;
  if (param_3 < uVar8 || param_3 - uVar8 == 0) {
    uVar14 = 0;
    iVar10 = uVar13 - uVar8;
    if (uVar8 <= uVar13 && iVar10 != 0) goto LAB_10079a090;
  }
  else {
    uVar11 = 2;
    uVar3 = uVar11;
    if ((int)sVar1 == 0) {
      uVar3 = (param_3 - uVar8) + 1;
    }
    if (0xffff < uVar3) {
      uVar11 = 4;
    }
    if (uVar3 < 0x100) {
      uVar11 = 1;
    }
    uVar14 = 0;
    if (1 < uVar3) {
      uVar14 = uVar11;
    }
    iVar10 = uVar13 - uVar8;
    if (uVar8 <= uVar13 && iVar10 != 0) {
LAB_10079a090:
      if ((int)sVar1 != 0) {
        iVar10 = 1;
        _bzero(param_1,sVar1);
        *param_1 = uVar13 + ~uVar8;
      }
      if (uVar14 < 2) {
        if (uVar14 == 0) {
          return;
        }
        *(char *)((long)param_1 + sVar1) = (char)iVar10;
        return;
      }
      if (uVar14 == 2) {
        *(short *)((long)param_1 + sVar1) = (short)iVar10;
        return;
      }
      *(int *)((long)param_1 + sVar1) = iVar10;
      return;
    }
  }
  if (uVar14 < 2) {
    if (uVar14 != 0) {
      *(undefined1 *)((long)param_1 + sVar1) = 0;
    }
  }
  else if (uVar14 == 2) {
    *(undefined2 *)((long)param_1 + sVar1) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + sVar1) = 0;
  }
  if (uVar13 != 0) {
    if (0xfc < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010079a108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar15 + 0x38))(param_1,param_2,uVar5,lVar4);
      return;
    }
    puVar12 = (uint *)(uVar2 + (long)param_1 & ~uVar9);
    if (uVar13 < 0xfe) {
      *(char *)((long)puVar12 + uVar7) = -(char)param_2;
    }
    else {
      uVar5 = (int)uVar7 + 1;
      uVar8 = 0xffffffff;
      if (uVar5 < 4) {
        uVar8 = ~(-1 << (ulong)(uVar5 * 8 & 0x1f));
      }
      if (uVar5 != 0) {
        uVar8 = uVar8 & uVar13 - 0xfe;
        uVar13 = 4;
        if (uVar5 < 4) {
          uVar13 = uVar5;
        }
        _bzero(puVar12,(ulong)uVar5);
        if ((int)uVar13 < 3) {
          if (uVar13 == 1) {
            *(char *)puVar12 = (char)uVar8;
          }
          else {
            *(short *)puVar12 = (short)uVar8;
          }
        }
        else if (uVar13 == 3) {
          *(short *)puVar12 = (short)uVar8;
          *(char *)((long)puVar12 + 2) = (char)(uVar8 >> 0x10);
        }
        else {
          *puVar12 = uVar8;
        }
      }
    }
  }
  return;
}



/* Address: 0x10079a1dc | FUN_10079a1dc */

void FUN_10079a1dc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    local_28 = puStack_30;
    _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_38);
  }
  return;
}


