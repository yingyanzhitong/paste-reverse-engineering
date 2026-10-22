/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10072a86c | thunk_FUN_10072b1dc */

void thunk_FUN_10072b1dc(void)

{
  FUN_10072b1dc();
  return;
}



/* Address: 0x10072a870 | FUN_10072a870 */

void FUN_10072a870(void)

{
  FUN_10072b250();
  return;
}



/* Address: 0x10072a87c | FUN_10072a87c */

void FUN_10072a87c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10072a888 | FUN_10072a888 */

void FUN_10072a888(undefined8 param_1,long param_2)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar6,uVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x40) = CONCAT71(extraout_var,OVar1.value);
  lVar7 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x48) = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar4;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar4;
  _swift_task_switch(FUN_10072a96c,0,0);
  return;
}



/* Address: 0x10072a96c | FUN_10072a96c */

void FUN_10072a96c(void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar1 = *(long *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  iVar2 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x28);
  *(int *)(unaff_x22 + 0xc0) = iVar2;
  pcVar7 = *(code **)(*(long *)(unaff_x22 + 0x48) + 0x10);
  *(code **)(unaff_x22 + 0x80) = pcVar7;
  (*pcVar7)(uVar4,*(long *)(unaff_x22 + 0x20) + (long)iVar2,*(undefined8 *)(unaff_x22 + 0x40));
  pcVar7 = *(code **)(lVar1 + 0x30);
  *(code **)(unaff_x22 + 0x88) = pcVar7;
  (*pcVar7)(uVar4,1,uVar8);
  if ((int)uVar4 == 1) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
              (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x40));
    puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
    uVar5 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar4,uVar8,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    _swift_getAssociatedConformanceWitness
              (uVar4,uVar8,uVar5,puVar3,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10072aeec;
  }
  else {
    pcVar7 = *(code **)(*(long *)(unaff_x22 + 0x68) + 0x20);
    *(code **)(unaff_x22 + 0x90) = pcVar7;
    (*pcVar7)(*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x60),
              *(undefined8 *)(unaff_x22 + 0x38));
    puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar5 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar4,uVar8,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    _swift_getAssociatedConformanceWitness
              (uVar4,uVar8,uVar5,puVar3,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x98) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10072ab10;
  }
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x10072ab10 | FUN_10072ab10 */

void FUN_10072ab10(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10072ab74;
  }
  else {
    pcVar1 = FUN_10072b070;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10072ab74 | FUN_10072ab74 */

void FUN_10072ab74(void)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = uVar6;
  (**(code **)(unaff_x22 + 0x88))(uVar6,1,uVar7);
  if ((int)uVar4 == 1) {
    lVar9 = *(long *)(unaff_x22 + 0x68);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x48);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(lVar9 + 8))(*(undefined8 *)(unaff_x22 + 0x78),uVar7);
    (**(code **)(lVar3 + 8))(uVar6,uVar4);
    (**(code **)(lVar9 + 0x38))(uVar8,1,1,uVar7);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010072ac54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar3 = *(long *)(unaff_x22 + 0x18);
  lVar9 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(unaff_x22 + 0x90))(*(undefined8 *)(unaff_x22 + 0x70),uVar6,uVar7);
  piVar2 = *(int **)(lVar9 + *(int *)(lVar3 + 0x24));
  iVar1 = *piVar2;
  plVar5 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10072acc8;
                    /* WARNING: Could not recover jumptable at 0x00010072acc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))
            (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x10072acc8 | FUN_10072acc8 */

void FUN_10072acc8(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0xc4) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xa8));
  _swift_task_switch(FUN_10072ad20,0,0);
  return;
}



/* Address: 0x10072ad20 | FUN_10072ad20 */

void FUN_10072ad20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  long unaff_x22;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if ((*(byte *)(unaff_x22 + 0xc4) & 1) != 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
              (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x38));
    puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar5 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar1,uVar2,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    _swift_getAssociatedConformanceWitness
              (uVar1,uVar2,uVar5,puVar4,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x98) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10072ab10;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  pcVar9 = *(code **)(unaff_x22 + 0x90);
  lVar10 = (long)*(int *)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar11 = *(long *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar3 = *(long *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar12 = *(long *)(unaff_x22 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(lVar11 + 8))(*(undefined8 *)(unaff_x22 + 0x78),uVar5);
  (**(code **)(lVar3 + 8))(lVar12 + lVar10,uVar2);
  (**(code **)(lVar11 + 0x10))(lVar12 + lVar10,uVar1,uVar5);
  pcVar7 = *(code **)(lVar11 + 0x38);
  (*pcVar7)(lVar12 + lVar10,0,1,uVar5);
  (*pcVar9)(uVar8,uVar1,uVar5);
  (*pcVar7)(uVar8,0,1,uVar5);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010072aee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10072aeec | FUN_10072aeec */

void FUN_10072aeec(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10072af50;
  }
  else {
    pcVar1 = FUN_10072affc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10072af50 | FUN_10072af50 */

void FUN_10072af50(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  
  pcVar5 = *(code **)(unaff_x22 + 0x80);
  iVar2 = *(int *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar7 = *(long *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x28))
            (lVar7 + iVar2,*(undefined8 *)(unaff_x22 + 0x50),uVar4);
  (*pcVar5)(uVar3,lVar7 + iVar2,uVar4);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010072aff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10072affc | FUN_10072affc */

void FUN_10072affc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010072b06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10072b070 | FUN_10072b070 */

void FUN_10072b070(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
            (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x38));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010072b0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10072b0f8 | FUN_10072b0f8 */

void FUN_10072b0f8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_10072a888(plVar1,param_1,param_2);
  return;
}



/* Address: 0x10072b160 | FUN_10072b160 */

void FUN_10072b160(undefined8 param_1)

{
  FUN_10072bc58(param_1,FUN_10072a870);
  return;
}



/* Address: 0x10072b16c | FUN_10072b16c */

void FUN_10072b16c(undefined8 param_1,undefined8 param_2)

{
  FUN_100706840(param_1,param_2,FUN_10072b160);
  return;
}



/* Address: 0x10072b178 | FUN_10072b178 */

void FUN_10072b178(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x28);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010072b1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x10))
            (param_1,unaff_x20 + iVar1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x10072b1dc | FUN_10072b1dc */

void FUN_10072b1dc(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x28);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010072b240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x28))
            (unaff_x20 + iVar1,param_1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x10072b244 | FUN_10072b244 */

void FUN_10072b244(void)

{
  FUN_10072b250();
  return;
}



/* Address: 0x10072b250 | FUN_10072b250 */

void FUN_10072b250(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = 0;
  (*param_7)(0,param_5,param_6);
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  iVar2 = *(int *)(lVar4 + 0x28);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + iVar2,1,1,lVar5);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,puVar3,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,param_2,lVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x24));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Address: 0x10072b338 | FUN_10072b338 */

void FUN_10072b338(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10072b344 | FUN_10072b344 */

void FUN_10072b344(undefined8 param_1,long param_2)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar6,uVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x40) = CONCAT71(extraout_var,OVar1.value);
  lVar7 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x48) = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar4;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar4;
  _swift_task_switch(FUN_10072b428,0,0);
  return;
}



/* Address: 0x10072b428 | FUN_10072b428 */

void FUN_10072b428(void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar1 = *(long *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  iVar2 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x28);
  *(int *)(unaff_x22 + 200) = iVar2;
  pcVar7 = *(code **)(*(long *)(unaff_x22 + 0x48) + 0x10);
  *(code **)(unaff_x22 + 0x80) = pcVar7;
  (*pcVar7)(uVar4,*(long *)(unaff_x22 + 0x20) + (long)iVar2,*(undefined8 *)(unaff_x22 + 0x40));
  pcVar7 = *(code **)(lVar1 + 0x30);
  *(code **)(unaff_x22 + 0x88) = pcVar7;
  (*pcVar7)(uVar4,1,uVar8);
  if ((int)uVar4 == 1) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
              (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x40));
    puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
    uVar5 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar4,uVar8,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    _swift_getAssociatedConformanceWitness
              (uVar4,uVar8,uVar5,puVar3,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb8) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10072b9c8;
  }
  else {
    pcVar7 = *(code **)(*(long *)(unaff_x22 + 0x68) + 0x20);
    *(code **)(unaff_x22 + 0x90) = pcVar7;
    (*pcVar7)(*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x60),
              *(undefined8 *)(unaff_x22 + 0x38));
    puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar5 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar4,uVar8,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    _swift_getAssociatedConformanceWitness
              (uVar4,uVar8,uVar5,puVar3,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x98) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10072b5cc;
  }
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x10072b5cc | FUN_10072b5cc */

void FUN_10072b5cc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10072b630;
  }
  else {
    pcVar1 = thunk_FUN_10072b070;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10072b630 | FUN_10072b630 */

void FUN_10072b630(void)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = uVar6;
  (**(code **)(unaff_x22 + 0x88))(uVar6,1,uVar7);
  if ((int)uVar4 == 1) {
    lVar9 = *(long *)(unaff_x22 + 0x68);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x48);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(lVar9 + 8))(*(undefined8 *)(unaff_x22 + 0x78),uVar7);
    (**(code **)(lVar3 + 8))(uVar6,uVar4);
    (**(code **)(lVar9 + 0x38))(uVar8,1,1,uVar7);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010072b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar3 = *(long *)(unaff_x22 + 0x18);
  lVar9 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(unaff_x22 + 0x90))(*(undefined8 *)(unaff_x22 + 0x70),uVar6,uVar7);
  piVar2 = *(int **)(lVar9 + *(int *)(lVar3 + 0x24));
  iVar1 = *piVar2;
  plVar5 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10072b784;
                    /* WARNING: Could not recover jumptable at 0x00010072b780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))
            (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x10072b784 | FUN_10072b784 */

void FUN_10072b784(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    *(byte *)(lVar2 + 0xcc) = param_1 & 1;
    pcVar1 = FUN_10072b7fc;
  }
  else {
    pcVar1 = FUN_10072bb4c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10072b7fc | FUN_10072b7fc */

void FUN_10072b7fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  long unaff_x22;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if ((*(byte *)(unaff_x22 + 0xcc) & 1) != 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
              (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x38));
    puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar5 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar1,uVar2,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    _swift_getAssociatedConformanceWitness
              (uVar1,uVar2,uVar5,puVar4,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x98) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10072b5cc;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  pcVar9 = *(code **)(unaff_x22 + 0x90);
  lVar10 = (long)*(int *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar11 = *(long *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar3 = *(long *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar12 = *(long *)(unaff_x22 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(lVar11 + 8))(*(undefined8 *)(unaff_x22 + 0x78),uVar5);
  (**(code **)(lVar3 + 8))(lVar12 + lVar10,uVar2);
  (**(code **)(lVar11 + 0x10))(lVar12 + lVar10,uVar1,uVar5);
  pcVar7 = *(code **)(lVar11 + 0x38);
  (*pcVar7)(lVar12 + lVar10,0,1,uVar5);
  (*pcVar9)(uVar8,uVar1,uVar5);
  (*pcVar7)(uVar8,0,1,uVar5);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010072b9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10072b9c8 | FUN_10072b9c8 */

void FUN_10072b9c8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10072ba2c;
  }
  else {
    pcVar1 = FUN_10072bad8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10072ba2c | FUN_10072ba2c */

void FUN_10072ba2c(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  
  pcVar5 = *(code **)(unaff_x22 + 0x80);
  iVar2 = *(int *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar7 = *(long *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x28))
            (lVar7 + iVar2,*(undefined8 *)(unaff_x22 + 0x50),uVar4);
  (*pcVar5)(uVar3,lVar7 + iVar2,uVar4);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010072bad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10072bad8 | FUN_10072bad8 */

void FUN_10072bad8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010072bb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10072bb4c | FUN_10072bb4c */

void FUN_10072bb4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  pcVar4 = *(code **)(*(long *)(unaff_x22 + 0x68) + 8);
  (*pcVar4)(*(undefined8 *)(unaff_x22 + 0x70),uVar3);
  (*pcVar4)(uVar1,uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010072bbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10072bbe4 | FUN_10072bbe4 */

void FUN_10072bbe4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_10072b344(plVar1,param_1,param_2);
  return;
}



/* Address: 0x10072bc4c | FUN_10072bc4c */

void FUN_10072bc4c(undefined8 param_1)

{
  FUN_10072bc58(param_1,FUN_10072b244);
  return;
}



/* Address: 0x10072bc58 | FUN_10072bc58 */

void FUN_10072bc58(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  
  lVar2 = *(long *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(long *)(lVar2 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar5 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
  (**(code **)(lVar7 + 0x10))(&stack0xffffffffffffffa0 + -(lVar6 + 0xfU & 0xfffffffffffffff0));
  Swift::AsyncSequence::_makeAsyncIterator();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x24));
  uVar4 = puVar1[1];
  (*param_3)(param_1,(long)(&stack0xffffffffffffffa0 + -(lVar6 + 0xfU & 0xfffffffffffffff0)) -
                     (lVar5 + 0xfU & 0xfffffffffffffff0),*puVar1,uVar4,lVar2,uVar3);
  _swift_retain(uVar4);
  return;
}



/* Address: 0x10072bd50 | FUN_10072bd50 */

void FUN_10072bd50(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75120,param_1);
  return;
}



/* Address: 0x10072bd60 | FUN_10072bd60 */

void FUN_10072bd60(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c751c0,param_1);
  return;
}



/* Address: 0x10072bd70 | FUN_10072bd70 */

void FUN_10072bd70(undefined8 param_1,undefined8 param_2)

{
  FUN_100706840(param_1,param_2,FUN_10072bc4c);
  return;
}



/* Address: 0x10072bd7c | thunk_FUN_10071d4c4 */

void thunk_FUN_10071d4c4(void)

{
  FUN_10071d4c4();
  return;
}



/* Address: 0x10072bd80 | thunk_FUN_10040331c */

void thunk_FUN_10040331c(void)

{
  FUN_10040331c();
  return;
}



/* Address: 0x10072bd84 | thunk_FUN_1004033cc */

void thunk_FUN_1004033cc(void)

{
  FUN_1004033cc();
  return;
}



/* Address: 0x10072bd88 | thunk_FUN_10040340c */

void thunk_FUN_10040340c(void)

{
  FUN_10040340c();
  return;
}



/* Address: 0x10072bd8c | thunk_FUN_100403470 */

void thunk_FUN_100403470(void)

{
  FUN_100403470();
  return;
}



/* Address: 0x10072bd90 | thunk_FUN_1004034e0 */

void thunk_FUN_1004034e0(void)

{
  FUN_1004034e0();
  return;
}



/* Address: 0x10072bd94 | thunk_FUN_10040353c */

void thunk_FUN_10040353c(void)

{
  FUN_10040353c();
  return;
}



/* Address: 0x10072bd98 | thunk_FUN_1004035a0 */

void thunk_FUN_1004035a0(void)

{
  FUN_1004035a0();
  return;
}



/* Address: 0x10072bd9c | thunk_FUN_100403694 */

void thunk_FUN_100403694(void)

{
  FUN_100403694();
  return;
}



/* Address: 0x10072bda0 | FUN_10072bda0 */

void FUN_10072bda0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10072bdac | FUN_10072bdac */

void FUN_10072bdac(undefined8 param_1)

{
  FUN_10072bdf4(param_1,0x64000002);
  return;
}



/* Address: 0x10072bdb8 | thunk_FUN_10072be40 */

void thunk_FUN_10072be40(void)

{
  FUN_10072be40();
  return;
}



/* Address: 0x10072bdbc | thunk_FUN_10072bf18 */

void thunk_FUN_10072bf18(void)

{
  FUN_10072bf18();
  return;
}



/* Address: 0x10072bdc0 | thunk_FUN_10072c0b0 */

void thunk_FUN_10072c0b0(void)

{
  FUN_10072c0b0();
  return;
}



/* Address: 0x10072bdc4 | thunk_FUN_10072c198 */

void thunk_FUN_10072c198(void)

{
  FUN_10072c198();
  return;
}



/* Address: 0x10072bdc8 | thunk_FUN_10072c2d8 */

void thunk_FUN_10072c2d8(void)

{
  FUN_10072c2d8();
  return;
}



/* Address: 0x10072bdcc | thunk_FUN_10072c464 */

void thunk_FUN_10072c464(void)

{
  FUN_10072c464();
  return;
}



/* Address: 0x10072bdd0 | thunk_FUN_10072c598 */

void thunk_FUN_10072c598(void)

{
  FUN_10072c598();
  return;
}



/* Address: 0x10072bdd4 | thunk_FUN_10072c718 */

void thunk_FUN_10072c718(void)

{
  FUN_10072c718();
  return;
}



/* Address: 0x10072bdd8 | thunk_FUN_10072c944 */

void thunk_FUN_10072c944(void)

{
  FUN_10072c944();
  return;
}



/* Address: 0x10072bddc | FUN_10072bddc */

void FUN_10072bddc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10072bde8 | FUN_10072bde8 */

void FUN_10072bde8(undefined8 param_1)

{
  FUN_10072bdf4(param_1,0x65000002);
  return;
}



/* Address: 0x10072bdf4 | FUN_10072bdf4 */

void FUN_10072bdf4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_1[1],*param_1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  _swift_getFunctionTypeMetadata2(param_2,uVar1,uVar1,PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x10072be40 | FUN_10072be40 */

void FUN_10072be40(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  Optional OVar3;
  long lVar4;
  ulong uVar5;
  undefined7 extraout_var;
  long local_48;
  undefined *puStack_40;
  long local_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar4 = 0x13f;
  uVar5 = uVar2;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (uVar5 < 0x40) {
    local_48 = *(long *)(lVar4 + -8) + 0x40;
    puStack_40 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    uVar5 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar2,uVar1,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    OVar3 = Swift::Optional::typeMetadataAccessor();
    if (uVar5 < 0x40) {
      local_38 = *(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,3,&local_48,param_1 + 0x20);
    }
  }
  return;
}



/* Address: 0x10072bf18 | FUN_10072bf18 */

long * FUN_10072bf18(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  size_t sVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined8 uVar15;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  uVar15 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar15,uVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar14 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar15,uVar5,puVar2,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = *(long *)(lVar4 + -8);
  uVar6 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  sVar7 = *(size_t *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    sVar7 = sVar7 + 1;
  }
  uVar1 = (uint)uVar6 | *(uint *)(lVar14 + 0x50) & 0xf8;
  if ((((*(uint *)(lVar14 + 0x50) | *(uint *)(lVar11 + 0x50)) >> 0x14 & 1) == 0) &&
     (0xffffffffffffffe6 < ((-0x11 - uVar6) - (lVar12 + 7U & 0xfffffffffffffff8) | uVar6) - sVar7 &&
      uVar1 < 8)) {
    (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar3);
    puVar9 = (undefined8 *)((long)param_1 + lVar12 + 7 & 0xfffffffffffffff8);
    puVar8 = (undefined8 *)((long)param_2 + lVar12 + 7 & 0xfffffffffffffff8);
    uVar5 = puVar8[1];
    uVar15 = *puVar8;
    puVar10 = puVar9 + 2;
    puVar9[1] = puVar8[1];
    *puVar9 = uVar15;
    pcVar13 = *(code **)(lVar11 + 0x30);
    _swift_retain(uVar5);
    puVar9 = puVar8 + 2;
    (*pcVar13)(puVar9,1,lVar4);
    if ((int)puVar9 == 0) {
      (**(code **)(lVar11 + 0x10))(puVar10,puVar8 + 2,lVar4);
      (**(code **)(lVar11 + 0x38))(puVar10,0,1,lVar4);
    }
    else {
      _memcpy(puVar10,puVar8 + 2,sVar7);
    }
  }
  else {
    uVar6 = (ulong)(uVar1 | 7);
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10072c0b0 | FUN_10072c0b0 */

void FUN_10072c0b0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar7 = *(long *)(lVar4 + -8);
  (**(code **)(lVar7 + 8))(param_1,lVar4);
  uVar8 = param_1 + *(long *)(lVar7 + 0x40) + 7U & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(uVar8 + 8));
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar1,puVar3,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar7 = *(long *)(lVar4 + -8);
  uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar8 + uVar6 + 0x10;
  uVar5 = uVar8 & (uVar6 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x30))(uVar5,1,lVar4);
  if ((int)uVar5 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010072c194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 8))(uVar8 & (uVar6 ^ 0xffffffffffffffff),lVar4);
  return;
}



/* Address: 0x10072c198 | FUN_10072c198 */

long FUN_10072c198(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  size_t sVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  code *pcVar14;
  undefined8 uVar15;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar10 = *(long *)(lVar6 + -8);
  (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar6);
  lVar6 = *(long *)(lVar10 + 0x40) + 7;
  puVar12 = (undefined8 *)(lVar6 + param_1 & 0xfffffffffffffff8);
  puVar13 = (undefined8 *)(lVar6 + param_2 & 0xfffffffffffffff8);
  uVar11 = puVar13[1];
  uVar15 = *puVar13;
  puVar12[1] = puVar13[1];
  *puVar12 = uVar15;
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,puVar5,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = *(long *)(lVar6 + -8);
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar1 = uVar9 + 0x10 + (long)puVar12;
  uVar2 = uVar9 + 0x10 + (long)puVar13;
  pcVar14 = *(code **)(lVar10 + 0x30);
  _swift_retain(uVar11);
  uVar7 = uVar2 & (uVar9 ^ 0xffffffffffffffff);
  (*pcVar14)(uVar7,1,lVar6);
  if ((int)uVar7 == 0) {
    (**(code **)(lVar10 + 0x10))
              (uVar1 & (uVar9 ^ 0xffffffffffffffff),uVar2 & (uVar9 ^ 0xffffffffffffffff),lVar6);
    (**(code **)(lVar10 + 0x38))(uVar1 & (uVar9 ^ 0xffffffffffffffff),0,1,lVar6);
  }
  else {
    sVar8 = *(size_t *)(lVar10 + 0x40);
    if (*(int *)(lVar10 + 0x54) == 0) {
      sVar8 = sVar8 + 1;
    }
    _memcpy((void *)(uVar1 & (uVar9 ^ 0xffffffffffffffff)),
            (void *)(uVar2 & (uVar9 ^ 0xffffffffffffffff)),sVar8);
  }
  return param_1;
}


