/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10073a464 | FUN_10073a464 */

void FUN_10073a464(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10073a470 | FUN_10073a470 */

void FUN_10073a470(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10073a594(0,param_6,param_7,param_8);
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



/* Address: 0x10073a594 | FUN_10073a594 */

void FUN_10073a594(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10073a5a0 | FUN_10073a5a0 */

void FUN_10073a5a0(undefined8 param_1,long param_2)

{
  Optional OVar1;
  long lVar2;
  ulong uVar3;
  undefined7 extraout_var;
  ulong uVar4;
  undefined7 extraout_var_00;
  undefined8 unaff_x20;
  long lVar5;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(param_2 + 0x10);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness();
  *(long *)(unaff_x22 + 0x38) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x50) = CONCAT71(extraout_var,OVar1.value);
  lVar2 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  lVar5 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x70) = lVar5;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x78) = CONCAT71(extraout_var_00,OVar1.value);
  lVar2 = *(long *)(CONCAT71(extraout_var_00,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  _swift_task_switch(FUN_10073a6bc,0,0);
  return;
}



/* Address: 0x10073a6bc | FUN_10073a6bc */

void FUN_10073a6bc(void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  iVar2 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x2c);
  *(int *)(unaff_x22 + 200) = iVar2;
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 0x10))
            (uVar4,*(long *)(unaff_x22 + 0x20) + (long)iVar2,*(undefined8 *)(unaff_x22 + 0x78));
  (**(code **)(lVar1 + 0x30))(uVar4,1,uVar7);
  if ((int)uVar4 == 1) {
    lVar1 = *(long *)(unaff_x22 + 0x90);
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
              (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
    uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
    (**(code **)(lVar1 + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x70));
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010073a7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
  pcVar6 = *(code **)(*(long *)(unaff_x22 + 0x90) + 0x20);
  *(code **)(unaff_x22 + 0xa0) = pcVar6;
  (*pcVar6)(*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x88),
            *(undefined8 *)(unaff_x22 + 0x70));
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar4,uVar7,uVar8,puVar3,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar5 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10073a858;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x10073a858 | FUN_10073a858 */

void FUN_10073a858(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10073a8bc;
  }
  else {
    pcVar1 = FUN_10073ac14;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10073a8bc | FUN_10073a8bc */

void FUN_10073a8bc(void)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x10))
            (uVar5,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x50));
  (**(code **)(lVar2 + 0x30))(uVar5,1,uVar8);
  if ((int)uVar5 == 1) {
    iVar4 = *(int *)(unaff_x22 + 200);
    lVar2 = *(long *)(unaff_x22 + 0x90);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar3 = *(long *)(unaff_x22 + 0x80);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar12 = *(long *)(unaff_x22 + 0x20);
    pcVar7 = *(code **)(*(long *)(unaff_x22 + 0x58) + 8);
    (*pcVar7)(*(undefined8 *)(unaff_x22 + 0x68),uVar11);
    (**(code **)(lVar2 + 8))(uVar8,uVar9);
    (*pcVar7)(uVar10,uVar11);
    (**(code **)(lVar3 + 8))(lVar12 + iVar4,uVar5);
    pcVar7 = *(code **)(lVar2 + 0x38);
    (*pcVar7)(lVar12 + iVar4,1,1,uVar9);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x48);
    (*pcVar7)(*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x70));
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010073a9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar2 = *(long *)(unaff_x22 + 0x18);
  lVar3 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x60),
             *(undefined8 *)(unaff_x22 + 0x38));
  piVar1 = *(int **)(lVar3 + *(int *)(lVar2 + 0x30));
  iVar4 = *piVar1;
  plVar6 = (long *)(ulong)(uint)piVar1[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10073aa7c;
                    /* WARNING: Could not recover jumptable at 0x00010073aa78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar4 + (long)piVar1))
            (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x10073aa7c | FUN_10073aa7c */

void FUN_10073aa7c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10073aae0;
  }
  else {
    pcVar1 = FUN_10073aca0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10073aae0 | FUN_10073aae0 */

void FUN_10073aae0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  pcVar2 = *(code **)(unaff_x22 + 0xa0);
  lVar12 = (long)*(int *)(unaff_x22 + 200);
  lVar13 = *(long *)(unaff_x22 + 0x90);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x58);
  lVar6 = *(long *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))
            (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x38));
  (**(code **)(lVar4 + 8))(uVar8,uVar9);
  (**(code **)(lVar3 + 8))(lVar6 + lVar12,uVar7);
  (**(code **)(lVar13 + 0x10))(lVar6 + lVar12,uVar1,uVar10);
  pcVar11 = *(code **)(lVar13 + 0x38);
  (*pcVar11)(lVar6 + lVar12,0,1,uVar10);
  (*pcVar2)(uVar5,uVar1,uVar10);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  (*pcVar11)(*(undefined8 *)(unaff_x22 + 0x10),0,1,*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010073ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10073ac14 | FUN_10073ac14 */

void FUN_10073ac14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010073ac9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10073aca0 | FUN_10073aca0 */

void FUN_10073aca0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  iVar5 = *(int *)(unaff_x22 + 200);
  lVar10 = *(long *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar7 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))(lVar7 + iVar5,*(undefined8 *)(unaff_x22 + 0x78));
  (**(code **)(lVar10 + 0x38))(lVar7 + iVar5,1,1,uVar6);
  _swift_willThrow();
  (**(code **)(lVar3 + 8))(uVar8,uVar9);
  (**(code **)(lVar4 + 8))(uVar1,uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010073ada4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10073ada8 | FUN_10073ada8 */

void FUN_10073ada8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_10073a5a0(plVar1,param_1,param_2);
  return;
}



/* Address: 0x10073ae10 | FUN_10073ae10 */

void FUN_10073ae10(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(param_2 + 0x18);
  lVar11 = *(long *)(lVar4 + -8);
  puVar9 = auStack_70 + -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(lVar2 + -8);
  lVar7 = (long)puVar9 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  lVar6 = 0;
  local_68 = param_1;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar6 = *(long *)(*(long *)(lVar6 + -8) + 0x40);
  (**(code **)(lVar8 + 0x10))(lVar7);
  Swift::AsyncSequence::_makeAsyncIterator();
  (**(code **)(lVar11 + 0x10))(puVar9,unaff_x20 + *(int *)(param_2 + 0x2c),lVar4);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x30));
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  _swift_retain(uVar5);
  FUN_10073a470(local_68,lVar7 - (lVar6 + 0xfU & 0xfffffffffffffff0),puVar9,uVar3,uVar5,lVar2,lVar4,
                uVar10);
  return;
}



/* Address: 0x10073af4c | FUN_10073af4c */

void FUN_10073af4c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c758e8,param_1);
  return;
}



/* Address: 0x10073af5c | FUN_10073af5c */

void FUN_10073af5c(long param_1)

{
  FUN_10073ae10();
                    /* WARNING: Could not recover jumptable at 0x00010073af88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x10073af8c | FUN_10073af8c */

void FUN_10073af8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_1[1];
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_1[2],*param_1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  local_18 = uVar1;
  _swift_getFunctionTypeMetadata
            (0x67000002,&local_20,&DAT_100c759c0,PTR___type_metadata_for____100eae0c8 + 8);
  return;
}



/* Address: 0x10073aff0 | FUN_10073aff0 */

void FUN_10073aff0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_4 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  (**(code **)(lVar3 + 0x10))(&stack0xffffffffffffffb0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar3 + 0x20))
            (param_1,&stack0xffffffffffffffb0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_4);
  lVar2 = 0;
  FUN_10073b10c(0,param_4,param_5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x24));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _swift_retain(param_3);
  return;
}



/* Address: 0x10073b09c | FUN_10073b09c */

void FUN_10073b09c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  lVar2 = 0;
  FUN_10073b10c(0,param_5,param_6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x24));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Address: 0x10073b10c | FUN_10073b10c */

void FUN_10073b10c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10073b118 | FUN_10073b118 */

void FUN_10073b118(undefined8 param_1,long param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010073b16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x10073b170 | FUN_10073b170 */

void FUN_10073b170(undefined8 param_1,long param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010073b1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x28))();
  return;
}



/* Address: 0x10073b1cc | FUN_10073b1cc */

void FUN_10073b1cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  Optional OVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined7 extraout_var;
  long lVar8;
  code *pcVar9;
  
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar8 = *(long *)(lVar5 + -8);
  pcVar9 = *(code **)(lVar8 + 0x38);
  (*pcVar9)(param_1,1,1,lVar5);
  lVar6 = 0;
  FUN_10073b30c(0,param_5,param_6);
  iVar2 = *(int *)(lVar6 + 0x24);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,puVar3,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(param_1 + iVar2,1,1,lVar7);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar4.value) + -8) + 8))
            (param_1,CONCAT71(extraout_var,OVar4.value));
  (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar5);
  (*pcVar9)(param_1,0,1,lVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x28));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Address: 0x10073b30c | FUN_10073b30c */

void FUN_10073b30c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10073b318 | FUN_10073b318 */

void FUN_10073b318(undefined8 param_1,long param_2)

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
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar4;
  _swift_task_switch(FUN_10073b408,0,0);
  return;
}



/* Address: 0x10073b408 | FUN_10073b408 */

void FUN_10073b408(void)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  iVar2 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x24);
  *(int *)(unaff_x22 + 0xe0) = iVar2;
  pcVar5 = *(code **)(*(long *)(unaff_x22 + 0x48) + 0x10);
  *(code **)(unaff_x22 + 0x88) = pcVar5;
  (*pcVar5)(uVar8,*(long *)(unaff_x22 + 0x20) + (long)iVar2,*(undefined8 *)(unaff_x22 + 0x40));
  pcVar5 = *(code **)(lVar3 + 0x30);
  *(code **)(unaff_x22 + 0x90) = pcVar5;
  (*pcVar5)(uVar8,1,uVar7);
  if ((int)uVar8 == 1) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
              (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x40));
    lVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar8,uVar7,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(uVar9,1,lVar3);
    if ((int)uVar9 == 0) {
      _swift_getAssociatedConformanceWitness
                (*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),lVar3,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar4 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xd0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_10073ba34;
LAB_10073b6e0:
      Swift::AsyncIteratorProtocol::_next();
      return;
    }
    (**(code **)(*(long *)(unaff_x22 + 0x70) + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x50),1,1,*(undefined8 *)(unaff_x22 + 0x38));
    pcVar5 = *(code **)(unaff_x22 + 0x88);
    iVar2 = *(int *)(unaff_x22 + 0xe0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x20);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x28))
              (lVar3 + iVar2,*(undefined8 *)(unaff_x22 + 0x50),uVar7);
    (*pcVar5)(uVar8,lVar3 + iVar2,uVar7);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    pcVar5 = *(code **)(*(long *)(unaff_x22 + 0x70) + 0x20);
    *(code **)(unaff_x22 + 0x98) = pcVar5;
    (*pcVar5)(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x68),
              *(undefined8 *)(unaff_x22 + 0x38));
    lVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar9,uVar8,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    *(long *)(unaff_x22 + 0xa0) = lVar3;
    lVar6 = *(long *)(lVar3 + -8);
    *(long *)(unaff_x22 + 0xa8) = lVar6;
    (**(code **)(lVar6 + 0x30))(uVar7,1,lVar3);
    if ((int)uVar7 == 0) {
      _swift_getAssociatedConformanceWitness
                (*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),lVar3,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar4 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xb0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_10073b708;
      goto LAB_10073b6e0;
    }
    (**(code **)(*(long *)(unaff_x22 + 0x70) + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x60),1,1,*(undefined8 *)(unaff_x22 + 0x38));
    lVar6 = *(long *)(unaff_x22 + 0x70);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x48);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(lVar6 + 8))(*(undefined8 *)(unaff_x22 + 0x80),uVar9);
    (**(code **)(lVar3 + 8))(uVar7,uVar8);
    (**(code **)(lVar6 + 0x38))(uVar10,1,1,uVar9);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010073b648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10073b708 | FUN_10073b708 */

void FUN_10073b708(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10073b76c;
  }
  else {
    pcVar1 = FUN_10073bbc8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10073b76c | FUN_10073b76c */

void FUN_10073b76c(void)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar5 = uVar7;
  (**(code **)(unaff_x22 + 0x90))(uVar7,1,uVar8);
  if ((int)uVar5 == 1) {
    lVar10 = *(long *)(unaff_x22 + 0x70);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x48);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(lVar10 + 8))(*(undefined8 *)(unaff_x22 + 0x80),uVar8);
    (**(code **)(lVar3 + 8))(uVar7,uVar5);
    (**(code **)(lVar10 + 0x38))(uVar9,1,1,uVar8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010073b854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar3 = *(long *)(unaff_x22 + 0x18);
  lVar10 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(unaff_x22 + 0x98))(*(undefined8 *)(unaff_x22 + 0x78),uVar7,uVar8);
  piVar2 = *(int **)(lVar10 + *(int *)(lVar3 + 0x28));
  iVar1 = *piVar2;
  plVar6 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10073b8cc;
                    /* WARNING: Could not recover jumptable at 0x00010073b8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))
            (plVar6,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x80),
             *(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Address: 0x10073b8cc | FUN_10073b8cc */

void FUN_10073b8cc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10073b930;
  }
  else {
    pcVar1 = FUN_10073bc58;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10073b930 | FUN_10073b930 */

void FUN_10073b930(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  
  iVar6 = *(int *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  pcVar4 = *(code **)(unaff_x22 + 0x88);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar5 = *(long *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar11 = *(long *)(unaff_x22 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  pcVar10 = *(code **)(lVar2 + 8);
  (*pcVar10)(*(undefined8 *)(unaff_x22 + 0x78),uVar9);
  (*pcVar10)(uVar1,uVar9);
  (**(code **)(lVar2 + 0x38))(uVar8,0,1,uVar9);
  (**(code **)(lVar5 + 0x28))(lVar11 + iVar6,uVar8,uVar3);
  (*pcVar4)(uVar7,lVar11 + iVar6,uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010073ba30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10073ba34 | FUN_10073ba34 */

void FUN_10073ba34(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10073ba98;
  }
  else {
    pcVar1 = FUN_10073bb4c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10073ba98 | FUN_10073ba98 */

void FUN_10073ba98(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long unaff_x22;
  long lVar8;
  
  pcVar7 = *(code **)(unaff_x22 + 0x88);
  iVar4 = *(int *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar8 = *(long *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x28))
            (lVar8 + iVar4,*(undefined8 *)(unaff_x22 + 0x50),uVar6);
  (*pcVar7)(uVar5,lVar8 + iVar4,uVar6);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010073bb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10073bb4c | FUN_10073bb4c */

void FUN_10073bb4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010073bbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10073bbc8 | FUN_10073bbc8 */

void FUN_10073bbc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))
            (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x38));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010073bc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10073bc58 | FUN_10073bc58 */

void FUN_10073bc58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  Optional OVar5;
  undefined7 extraout_var;
  code *pcVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar3 = *(long *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar9 = *(long *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar5.value) + -8) + 8))
            (uVar8,CONCAT71(extraout_var,OVar5.value));
  (**(code **)(lVar3 + 0x38))(uVar8,1,1,uVar1);
  _swift_willThrow();
  pcVar6 = *(code **)(lVar9 + 8);
  (*pcVar6)(uVar2,uVar7);
  (*pcVar6)(uVar4,uVar7);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010073bd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10073bd54 | FUN_10073bd54 */

void FUN_10073bd54(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_10073b318(plVar1,param_1,param_2);
  return;
}



/* Address: 0x10073bdbc | FUN_10073bdbc */

void FUN_10073bdbc(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  
  lVar2 = *(long *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  lVar8 = *(long *)(lVar2 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar6 = *(long *)(*(long *)(lVar6 + -8) + 0x40);
  (**(code **)(lVar8 + 0x10))(&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0));
  Swift::AsyncSequence::_makeAsyncIterator();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x24));
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  _swift_retain(uVar5);
  FUN_10073b1cc(param_1,(long)(&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0)) -
                        (lVar6 + 0xfU & 0xfffffffffffffff0),uVar3,uVar5,lVar2,uVar4);
  return;
}



/* Address: 0x10073beac | FUN_10073beac */

void FUN_10073beac(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75a08,param_1);
  return;
}



/* Address: 0x10073bebc | FUN_10073bebc */

void FUN_10073bebc(long param_1)

{
  FUN_10073bdbc();
                    /* WARNING: Could not recover jumptable at 0x00010073bee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x10073beec | FUN_10073beec */

void FUN_10073beec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_1[1],*param_1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  _swift_getFunctionTypeMetadata2(0x65000002,uVar1,uVar1,uVar1);
  return;
}



/* Address: 0x10073bf2c | FUN_10073bf2c */

undefined1  [16] FUN_10073bf2c(long param_1)

{
  undefined8 uVar1;
  Optional OVar2;
  ulong uVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  long local_48;
  long local_40;
  undefined *puStack_38;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar1,uVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,OVar2.value);
  if (uVar3 < 0x40) {
    local_48 = *(long *)(lVar4 + -8) + 0x40;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar1,uVar5,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    OVar2 = Swift::Optional::typeMetadataAccessor();
    lVar4 = CONCAT71(extraout_var_00,OVar2.value);
    if (uVar3 < 0x40) {
      local_40 = *(long *)(lVar4 + -8) + 0x40;
      puStack_38 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
      _swift_initStructMetadata(param_1,0,3,&local_48,param_1 + 0x20);
      lVar4 = 0;
      uVar5 = 0;
      goto LAB_10073bffc;
    }
  }
  uVar5 = 0x3f;
LAB_10073bffc:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = lVar4;
  return auVar6;
}



/* Address: 0x10073c010 | FUN_10073c010 */

long * FUN_10073c010(long *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  size_t sVar11;
  undefined8 *puVar12;
  size_t sVar13;
  void *pvVar14;
  void *pvVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar18 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar1,uVar18,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar17 = *(long *)(lVar4 + -8);
  sVar11 = *(size_t *)(lVar17 + 0x40);
  if (*(int *)(lVar17 + 0x54) == 0) {
    sVar11 = sVar11 + 1;
  }
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar1,uVar18,puVar3,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar16 = *(long *)(lVar5 + -8);
  uVar8 = (ulong)*(uint *)(lVar16 + 0x50) & 0xff;
  uVar9 = sVar11 + uVar8;
  sVar13 = *(size_t *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    sVar13 = sVar13 + 1;
  }
  uVar2 = (uint)uVar8 | *(uint *)(lVar17 + 0x50) & 0xf8;
  if ((uVar2 < 8 && ((*(uint *)(lVar17 + 0x50) | *(uint *)(lVar16 + 0x50)) & 0x100000) == 0) &&
      (sVar13 + (uVar9 & (uVar8 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 0x10 < 0x19) {
    plVar6 = param_2;
    (**(code **)(lVar17 + 0x30))(param_2,1,lVar4);
    if ((int)plVar6 == 0) {
      (**(code **)(lVar17 + 0x10))(param_1,param_2,lVar4);
      (**(code **)(lVar17 + 0x38))(param_1,0,1,lVar4);
    }
    else {
      _memcpy(param_1,param_2,sVar11);
    }
    pvVar15 = (void *)(uVar9 + (long)param_1 & ~uVar8);
    pvVar14 = (void *)(uVar9 + (long)param_2 & ~uVar8);
    pvVar7 = pvVar14;
    (**(code **)(lVar16 + 0x30))(pvVar14,1,lVar5);
    if ((int)pvVar7 == 0) {
      (**(code **)(lVar16 + 0x10))(pvVar15,pvVar14,lVar5);
      (**(code **)(lVar16 + 0x38))(pvVar15,0,1,lVar5);
    }
    else {
      _memcpy(pvVar15,pvVar14,sVar13);
    }
    puVar10 = (undefined8 *)((long)pvVar15 + sVar13 + 7 & 0xfffffffffffffff8);
    puVar12 = (undefined8 *)((long)pvVar14 + sVar13 + 7 & 0xfffffffffffffff8);
    lVar4 = puVar12[1];
    uVar18 = *puVar12;
    puVar10[1] = puVar12[1];
    *puVar10 = uVar18;
  }
  else {
    uVar9 = (ulong)(uVar2 | 7);
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar4);
  return param_1;
}



/* Address: 0x10073c210 | FUN_10073c210 */

void FUN_10073c210(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar7 = *(long *)(lVar4 + -8);
  lVar8 = param_1;
  (**(code **)(lVar7 + 0x30))(param_1,1,lVar4);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar7 + 8))(param_1,lVar4);
  }
  iVar3 = *(int *)(lVar7 + 0x54);
  lVar8 = *(long *)(lVar7 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar7 = *(long *)(lVar4 + -8);
  lVar8 = lVar8 + param_1;
  if (iVar3 == 0) {
    lVar8 = lVar8 + 1;
  }
  uVar6 = lVar8 + (ulong)*(byte *)(lVar7 + 0x50) &
          ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = uVar6;
  (**(code **)(lVar7 + 0x30))(uVar6,1,lVar4);
  if ((int)uVar5 == 0) {
    (**(code **)(lVar7 + 8))(uVar6,lVar4);
  }
  lVar8 = uVar6 + *(long *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    lVar8 = lVar8 + 1;
  }
  _swift_release(*(undefined8 *)((lVar8 + 7U & 0xfffffffffffffff8) + 8));
  return;
}



/* Address: 0x10073c320 | FUN_10073c320 */

void * FUN_10073c320(void *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  long lVar11;
  size_t sVar12;
  undefined8 uVar13;
  
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar13 = *(undefined8 *)(param_3 + 0x18);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar13,uVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar11 = *(long *)(lVar2 + -8);
  pvVar3 = param_2;
  (**(code **)(lVar11 + 0x30))(param_2,1,lVar2);
  if ((int)pvVar3 == 0) {
    (**(code **)(lVar11 + 0x10))(param_1,param_2,lVar2);
    (**(code **)(lVar11 + 0x38))(param_1,0,1,lVar2);
    iVar10 = *(int *)(lVar11 + 0x54);
    sVar12 = *(size_t *)(lVar11 + 0x40);
  }
  else {
    iVar10 = *(int *)(lVar11 + 0x54);
    sVar12 = *(size_t *)(lVar11 + 0x40);
    sVar1 = sVar12;
    if (iVar10 == 0) {
      sVar1 = sVar12 + 1;
    }
    _memcpy(param_1,param_2,sVar1);
  }
  if (iVar10 == 0) {
    sVar12 = sVar12 + 1;
  }
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar13,uVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = *(long *)(lVar2 + -8);
  uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
  pvVar9 = (void *)(sVar12 + uVar5 + (long)param_1 & (uVar5 ^ 0xffffffffffffffff));
  pvVar8 = (void *)(sVar12 + uVar5 + (long)param_2 & (uVar5 ^ 0xffffffffffffffff));
  pvVar3 = pvVar8;
  (**(code **)(lVar11 + 0x30))(pvVar8,1,lVar2);
  if ((int)pvVar3 == 0) {
    (**(code **)(lVar11 + 0x10))(pvVar9,pvVar8,lVar2);
    (**(code **)(lVar11 + 0x38))(pvVar9,0,1,lVar2);
    iVar10 = *(int *)(lVar11 + 0x54);
    sVar12 = *(size_t *)(lVar11 + 0x40);
  }
  else {
    iVar10 = *(int *)(lVar11 + 0x54);
    sVar12 = *(size_t *)(lVar11 + 0x40);
    sVar1 = sVar12;
    if (iVar10 == 0) {
      sVar1 = sVar12 + 1;
    }
    _memcpy(pvVar9,pvVar8,sVar1);
  }
  if (iVar10 == 0) {
    sVar12 = sVar12 + 1;
  }
  puVar7 = (undefined8 *)((long)pvVar9 + sVar12 + 7 & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)((long)pvVar8 + sVar12 + 7 & 0xfffffffffffffff8);
  uVar4 = puVar6[1];
  uVar13 = *puVar6;
  puVar7[1] = puVar6[1];
  *puVar7 = uVar13;
  _swift_retain(uVar4);
  return param_1;
}



/* Address: 0x10073c4d0 | FUN_10073c4d0 */

void * FUN_10073c4d0(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 uVar10;
  void *pvVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar10 = *(undefined8 *)(param_3 + 0x18);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,uVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar13 = *(long *)(lVar1 + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  pvVar2 = param_1;
  (*pcVar14)(param_1,1,lVar1);
  pvVar3 = param_2;
  (*pcVar14)(param_2,1,lVar1);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 != 0) {
      (**(code **)(lVar13 + 8))(param_1,lVar1);
      goto LAB_10073c590;
    }
    (**(code **)(lVar13 + 0x18))(param_1,param_2,lVar1);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar13 + 0x38))(param_1,0,1,lVar1);
  }
  else {
LAB_10073c590:
    sVar7 = *(size_t *)(lVar13 + 0x40);
    if (*(int *)(lVar13 + 0x54) == 0) {
      sVar7 = sVar7 + 1;
    }
    _memcpy(param_1,param_2,sVar7);
  }
  lVar1 = *(long *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,uVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar12 = *(long *)(lVar13 + -8);
  uVar5 = (ulong)*(byte *)(lVar12 + 0x50);
  pvVar11 = (void *)(lVar1 + uVar5 + (long)param_1 & (uVar5 ^ 0xffffffffffffffff));
  pvVar9 = (void *)(lVar1 + uVar5 + (long)param_2 & (uVar5 ^ 0xffffffffffffffff));
  pcVar14 = *(code **)(lVar12 + 0x30);
  pvVar2 = pvVar11;
  (*pcVar14)(pvVar11,1,lVar13);
  pvVar3 = pvVar9;
  (*pcVar14)(pvVar9,1,lVar13);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 == 0) {
      (**(code **)(lVar12 + 0x18))(pvVar11,pvVar9,lVar13);
      goto LAB_10073c68c;
    }
    (**(code **)(lVar12 + 8))(pvVar11,lVar13);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar12 + 0x10))(pvVar11,pvVar9,lVar13);
    (**(code **)(lVar12 + 0x38))(pvVar11,0,1,lVar13);
    goto LAB_10073c68c;
  }
  sVar7 = *(size_t *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    sVar7 = sVar7 + 1;
  }
  _memcpy(pvVar11,pvVar9,sVar7);
LAB_10073c68c:
  lVar1 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  puVar8 = (undefined8 *)((long)pvVar11 + lVar1 + 7 & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)((long)pvVar9 + lVar1 + 7 & 0xfffffffffffffff8);
  uVar10 = puVar8[1];
  uVar4 = puVar6[1];
  uVar15 = *puVar6;
  puVar8[1] = puVar6[1];
  *puVar8 = uVar15;
  _swift_retain(uVar4);
  _swift_release(uVar10);
  return param_1;
}



/* Address: 0x10073c71c | FUN_10073c71c */

void * FUN_10073c71c(void *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  long lVar11;
  size_t sVar12;
  undefined8 uVar13;
  
  uVar13 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar13,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar11 = *(long *)(lVar3 + -8);
  pvVar4 = param_2;
  (**(code **)(lVar11 + 0x30))(param_2,1,lVar3);
  if ((int)pvVar4 == 0) {
    (**(code **)(lVar11 + 0x20))(param_1,param_2,lVar3);
    (**(code **)(lVar11 + 0x38))(param_1,0,1,lVar3);
    iVar10 = *(int *)(lVar11 + 0x54);
    sVar12 = *(size_t *)(lVar11 + 0x40);
  }
  else {
    iVar10 = *(int *)(lVar11 + 0x54);
    sVar12 = *(size_t *)(lVar11 + 0x40);
    sVar1 = sVar12;
    if (iVar10 == 0) {
      sVar1 = sVar12 + 1;
    }
    _memcpy(param_1,param_2,sVar1);
  }
  if (iVar10 == 0) {
    sVar12 = sVar12 + 1;
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar13,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
  pvVar9 = (void *)(sVar12 + uVar5 + (long)param_1 & (uVar5 ^ 0xffffffffffffffff));
  pvVar8 = (void *)(sVar12 + uVar5 + (long)param_2 & (uVar5 ^ 0xffffffffffffffff));
  pvVar4 = pvVar8;
  (**(code **)(lVar11 + 0x30))(pvVar8,1,lVar3);
  if ((int)pvVar4 == 0) {
    (**(code **)(lVar11 + 0x20))(pvVar9,pvVar8,lVar3);
    (**(code **)(lVar11 + 0x38))(pvVar9,0,1,lVar3);
    iVar10 = *(int *)(lVar11 + 0x54);
    sVar12 = *(size_t *)(lVar11 + 0x40);
  }
  else {
    iVar10 = *(int *)(lVar11 + 0x54);
    sVar12 = *(size_t *)(lVar11 + 0x40);
    sVar1 = sVar12;
    if (iVar10 == 0) {
      sVar1 = sVar12 + 1;
    }
    _memcpy(pvVar9,pvVar8,sVar1);
  }
  if (iVar10 == 0) {
    sVar12 = sVar12 + 1;
  }
  puVar7 = (undefined8 *)((long)pvVar9 + sVar12 + 7 & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)((long)pvVar8 + sVar12 + 7 & 0xfffffffffffffff8);
  uVar13 = *puVar6;
  puVar7[1] = puVar6[1];
  *puVar7 = uVar13;
  return param_1;
}



/* Address: 0x10073c8c4 | FUN_10073c8c4 */

void * FUN_10073c8c4(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined8 *puVar8;
  void *pvVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar14 = *(undefined8 *)(param_3 + 0x18);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar14,uVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar12 = *(long *)(lVar1 + -8);
  pcVar13 = *(code **)(lVar12 + 0x30);
  pvVar2 = param_1;
  (*pcVar13)(param_1,1,lVar1);
  pvVar3 = param_2;
  (*pcVar13)(param_2,1,lVar1);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 != 0) {
      (**(code **)(lVar12 + 8))(param_1,lVar1);
      goto LAB_10073c984;
    }
    (**(code **)(lVar12 + 0x28))(param_1,param_2,lVar1);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar12 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar1);
  }
  else {
LAB_10073c984:
    sVar7 = *(size_t *)(lVar12 + 0x40);
    if (*(int *)(lVar12 + 0x54) == 0) {
      sVar7 = sVar7 + 1;
    }
    _memcpy(param_1,param_2,sVar7);
  }
  lVar1 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar14,uVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = *(long *)(lVar12 + -8);
  uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
  pvVar10 = (void *)(lVar1 + uVar5 + (long)param_1 & (uVar5 ^ 0xffffffffffffffff));
  pvVar9 = (void *)(lVar1 + uVar5 + (long)param_2 & (uVar5 ^ 0xffffffffffffffff));
  pcVar13 = *(code **)(lVar11 + 0x30);
  pvVar2 = pvVar10;
  (*pcVar13)(pvVar10,1,lVar12);
  pvVar3 = pvVar9;
  (*pcVar13)(pvVar9,1,lVar12);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 == 0) {
      (**(code **)(lVar11 + 0x28))(pvVar10,pvVar9,lVar12);
      goto LAB_10073ca80;
    }
    (**(code **)(lVar11 + 8))(pvVar10,lVar12);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar11 + 0x20))(pvVar10,pvVar9,lVar12);
    (**(code **)(lVar11 + 0x38))(pvVar10,0,1,lVar12);
    goto LAB_10073ca80;
  }
  sVar7 = *(size_t *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    sVar7 = sVar7 + 1;
  }
  _memcpy(pvVar10,pvVar9,sVar7);
LAB_10073ca80:
  lVar1 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  puVar8 = (undefined8 *)((long)pvVar10 + lVar1 + 7 & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)((long)pvVar9 + lVar1 + 7 & 0xfffffffffffffff8);
  uVar4 = puVar8[1];
  uVar14 = *puVar6;
  puVar8[1] = puVar6[1];
  *puVar8 = uVar14;
  _swift_release(uVar4);
  return param_1;
}



/* Address: 0x10073cb04 | FUN_10073cb04 */

int FUN_10073cb04(int *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  
  puVar11 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar7 = *(undefined8 *)(param_3 + 0x10);
  uVar8 = *(undefined8 *)(param_3 + 0x18);
  lVar14 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,uVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar21 = *(long *)(lVar14 + -8);
  uVar9 = *(uint *)(lVar21 + 0x54);
  uVar2 = 0;
  if (uVar9 != 0) {
    uVar2 = uVar9 - 1;
  }
  lVar15 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,uVar7,puVar11,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar16 = *(long *)(lVar15 + -8);
  uVar10 = *(uint *)(lVar16 + 0x54);
  uVar3 = 0;
  if (uVar10 != 0) {
    uVar3 = uVar10 - 1;
  }
  uVar4 = uVar3;
  if (uVar3 <= uVar2) {
    uVar4 = uVar2;
  }
  if (uVar4 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  lVar18 = *(long *)(lVar21 + 0x40);
  if (uVar9 == 0) {
    lVar18 = lVar18 + 1;
  }
  lVar19 = *(long *)(lVar16 + 0x40);
  if (uVar10 == 0) {
    lVar19 = lVar19 + 1;
  }
  if (param_2 == 0) {
LAB_10073cc98:
    iVar13 = 0;
  }
  else {
    uVar20 = (ulong)*(byte *)(lVar16 + 0x50);
    if (uVar4 <= param_2 && param_2 - uVar4 != 0) {
      uVar1 = (lVar19 + 7 + (lVar18 + uVar20 & (uVar20 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8)
              + 0x10;
      uVar12 = 2;
      uVar6 = uVar12;
      if ((uVar1 & 0xfffffff8) == 0) {
        uVar6 = (param_2 - uVar4) + 1;
      }
      if (0xffff < uVar6) {
        uVar12 = 4;
      }
      if (uVar6 < 0x100) {
        uVar12 = 1;
      }
      uVar5 = 0;
      if (1 < uVar6) {
        uVar5 = uVar12;
      }
      if (uVar5 < 2) {
        if ((uVar5 != 0) &&
           (uVar12 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
        {
LAB_10073cc24:
          iVar13 = uVar12 - 1;
          if ((uVar1 & 0xfffffff8) != 0) {
            iVar13 = *param_1;
          }
          return uVar4 + iVar13 + 1;
        }
      }
      else {
        if (uVar5 == 2) {
          uVar12 = (uint)*(ushort *)((long)param_1 + uVar1);
        }
        else {
          uVar12 = *(uint *)((long)param_1 + uVar1);
        }
        if (uVar12 != 0) goto LAB_10073cc24;
      }
    }
    if (uVar2 == uVar4) {
      if (uVar9 < 2) goto LAB_10073cc98;
      pcVar17 = *(code **)(lVar21 + 0x30);
      lVar15 = lVar14;
      uVar10 = uVar9;
    }
    else {
      param_1 = (int *)(lVar18 + uVar20 + (long)param_1 & ~uVar20);
      if (uVar3 != uVar4) {
        uVar20 = *(ulong *)(lVar19 + 7 + (long)param_1 & 0xfffffffffffffff8);
        if (0xfffffffe < uVar20) {
          uVar20 = 0xffffffff;
        }
        return (int)uVar20 + 1;
      }
      if (uVar10 < 2) goto LAB_10073cc98;
      pcVar17 = *(code **)(lVar16 + 0x30);
    }
    (*pcVar17)(param_1,uVar10,lVar15);
    iVar13 = 0;
    if ((int)param_1 != 0) {
      iVar13 = (int)param_1 + -1;
    }
  }
  return iVar13;
}



/* Address: 0x10073cd00 | FUN_10073cd00 */

void FUN_10073cd00(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  code *UNRECOVERED_JUMPTABLE;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  
  puVar12 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar7 = *(undefined8 *)(param_4 + 0x10);
  uVar8 = *(undefined8 *)(param_4 + 0x18);
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,uVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar21 = *(long *)(lVar13 + -8);
  iVar9 = *(int *)(lVar21 + 0x54);
  uVar2 = 0;
  if (iVar9 != 0) {
    uVar2 = iVar9 - 1;
  }
  lVar14 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,uVar7,puVar12,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar15 = *(long *)(lVar14 + -8);
  iVar10 = *(int *)(lVar15 + 0x54);
  uVar3 = 0;
  if (iVar10 != 0) {
    uVar3 = iVar10 - 1;
  }
  uVar4 = uVar3;
  if (uVar3 <= uVar2) {
    uVar4 = uVar2;
  }
  if (uVar4 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  lVar17 = *(long *)(lVar21 + 0x40);
  if (iVar9 == 0) {
    lVar17 = lVar17 + 1;
  }
  uVar19 = (ulong)*(byte *)(lVar15 + 0x50);
  lVar18 = *(long *)(lVar15 + 0x40);
  if (iVar10 == 0) {
    lVar18 = lVar18 + 1;
  }
  sVar1 = (lVar18 + 7 + (lVar17 + uVar19 & (uVar19 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) +
          0x10;
  uVar20 = 2;
  uVar6 = uVar20;
  if ((int)sVar1 == 0) {
    uVar6 = (param_3 - uVar4) + 1;
  }
  if (0xffff < uVar6) {
    uVar20 = 4;
  }
  if (uVar6 < 0x100) {
    uVar20 = 1;
  }
  uVar5 = 0;
  if (1 < uVar6) {
    uVar5 = uVar20;
  }
  uVar20 = 0;
  if (uVar4 < param_3) {
    uVar20 = uVar5;
  }
  iVar11 = param_2 - uVar4;
  if (param_2 < uVar4 || iVar11 == 0) {
    if (uVar20 < 2) {
      if (uVar20 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar20 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      if (uVar2 == uVar4) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 0x38);
        lVar14 = lVar13;
        iVar10 = iVar9;
      }
      else {
        param_1 = (int *)(lVar17 + uVar19 + (long)param_1 & ~uVar19);
        if (uVar3 != uVar4) {
          puVar16 = (ulong *)(lVar18 + 7 + (long)param_1 & 0xfffffffffffffff8);
          if (-1 < (int)param_2) {
            *puVar16 = (ulong)(param_2 - 1);
            return;
          }
          *puVar16 = (ulong)(param_2 & 0x7fffffff);
          puVar16[1] = 0;
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x00010073cedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2 + 1,iVar10,lVar14);
      return;
    }
  }
  else {
    if ((int)sVar1 != 0) {
      iVar11 = 1;
      _bzero(param_1,sVar1);
      *param_1 = param_2 + ~uVar4;
    }
    if (uVar20 < 2) {
      if (uVar20 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar11;
      }
    }
    else if (uVar20 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar11;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar11;
    }
  }
  return;
}



/* Address: 0x10073cf30 | FUN_10073cf30 */

void FUN_10073cf30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  Optional OVar3;
  long lVar4;
  long lVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  code *pcVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_5 + -8);
  pcVar6 = *(code **)(lVar7 + 0x38);
  (*pcVar6)(param_1,1,1);
  lVar4 = 0;
  FUN_10073fd74(0,param_5,param_6);
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008;
  iVar1 = *(int *)(lVar4 + 0x2c);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008
             ,PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + iVar1,1,1,lVar5);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 8))
            (param_1,CONCAT71(extraout_var,OVar3.value));
  (**(code **)(lVar7 + 0x20))(param_1,param_4,param_5);
  (*pcVar6)(param_1,0,1,param_5);
  iVar1 = *(int *)(lVar4 + 0x24);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,puVar2,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1 + iVar1,param_2,lVar5);
  iVar1 = *(int *)(lVar4 + 0x28);
  OVar3 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010073d09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8) + 0x20))
            (param_1 + iVar1,param_3,CONCAT71(extraout_var_00,OVar3.value));
  return;
}



/* Address: 0x10073d0a0 | FUN_10073d0a0 */

void FUN_10073d0a0(undefined8 param_1,long param_2)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  ulong uVar3;
  ulong uVar4;
  undefined7 extraout_var_00;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_x20;
  long lVar7;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  lVar7 = *(long *)(param_2 + 0x10);
  *(long *)(unaff_x22 + 0x30) = lVar7;
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar5,lVar7,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x40) = CONCAT71(extraout_var,OVar1.value);
  lVar6 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x48) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x70) = CONCAT71(extraout_var_00,OVar1.value);
  lVar2 = *(long *)(CONCAT71(extraout_var_00,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x78) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  lVar2 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  _swift_task_switch(FUN_10073d1b8,0,0);
  return;
}



/* Address: 0x10073d1b8 | FUN_10073d1b8 */

void FUN_10073d1b8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar10 = *(long *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 0x10))
            (uVar9,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x70));
  (**(code **)(lVar10 + 0x30))(uVar9,1,uVar6);
  lVar10 = *(long *)(unaff_x22 + 0x58);
  if ((int)uVar9 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))
              (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x70));
    uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
    (**(code **)(lVar10 + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x38));
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010073d298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar1 = *(long *)(unaff_x22 + 0x48);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  lVar3 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0x88) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x80),
             *(undefined8 *)(unaff_x22 + 0x30));
  iVar4 = *(int *)(lVar2 + 0x2c);
  *(int *)(unaff_x22 + 0xb0) = iVar4;
  (**(code **)(lVar1 + 0x10))(uVar6,lVar3 + iVar4,uVar7);
  pcVar11 = *(code **)(lVar10 + 0x30);
  (*pcVar11)(uVar6,1,uVar9);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  if ((int)uVar6 == 1) {
    Swift::Clock::_get_now();
    (*pcVar11)(uVar9,1,uVar7);
    if ((int)uVar9 != 1) {
      (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
                (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
    }
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x20))(*(undefined8 *)(unaff_x22 + 0x60),uVar9,uVar7)
    ;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar10 = *(long *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),uVar6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_conformance_descriptor_for_Swift_Clock_Swift_Clock_Instant__Swift_InstantProtocol_100eaeff0
            );
  Swift::InstantProtocol::_advanced();
  pcVar11 = *(code **)(lVar10 + 8);
  *(code **)(unaff_x22 + 0x98) = pcVar11;
  (*pcVar11)(uVar9,uVar6);
  plVar5 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10073d400;
  Swift::Clock::_sleep();
  return;
}



/* Address: 0x10073d400 | FUN_10073d400 */

void FUN_10073d400(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10073d464;
  }
  else {
    pcVar1 = FUN_10073d578;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10073d464 | FUN_10073d464 */

void FUN_10073d464(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  code *pcVar10;
  long lVar11;
  
  lVar9 = (long)*(int *)(unaff_x22 + 0xb0);
  lVar1 = *(long *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar11 = *(long *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar5 = *(long *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar4 = *(long *)(unaff_x22 + 0x20);
  Swift::Clock::_get_now();
  (**(code **)(lVar1 + 8))(uVar7,uVar3);
  (**(code **)(lVar5 + 8))(lVar4 + lVar9,uVar2);
  (**(code **)(lVar11 + 0x20))(lVar4 + lVar9,uVar6,uVar8);
  pcVar10 = *(code **)(lVar11 + 0x38);
  (*pcVar10)(lVar4 + lVar9,0,1,uVar8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  (*pcVar10)(*(undefined8 *)(unaff_x22 + 0x10),0,1,*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010073d574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10073d578 | FUN_10073d578 */

void FUN_10073d578(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar7 = *(long *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  lVar8 = *(long *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  (**(code **)(unaff_x22 + 0x98))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x38));
  (**(code **)(lVar7 + 8))(uVar1,uVar4);
  _swift_errorRelease(uVar5);
  (**(code **)(lVar3 + 8))(uVar6,uVar2);
  (**(code **)(lVar7 + 0x38))(uVar6,1,1,uVar4);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(lVar8 + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010073d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10073d674 | FUN_10073d674 */

void FUN_10073d674(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005dfae0;
  FUN_10073d0a0(plVar1,param_1,param_2);
  return;
}



/* Address: 0x10073d6dc | FUN_10073d6dc */

void FUN_10073d6dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  int iVar1;
  Optional OVar2;
  long lVar3;
  long lVar4;
  undefined7 extraout_var;
  
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_4,param_5);
  lVar3 = 0;
  FUN_10073d7b0(0,param_5,param_6);
  iVar1 = *(int *)(lVar3 + 0x24);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008
             ,PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1 + iVar1,param_2,lVar4);
  iVar1 = *(int *)(lVar3 + 0x28);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010073d7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x20))
            (param_1 + iVar1,param_3,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x10073d7b0 | FUN_10073d7b0 */

void FUN_10073d7b0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10073d7bc | FUN_10073d7bc */

void FUN_10073d7bc(undefined8 param_1,long param_2)

{
  long lVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar1 = *(long *)(param_2 + 0x10);
  local_70 = *(undefined8 *)(param_2 + 0x18);
  lVar4 = *(long *)(lVar1 + -8);
  lVar5 = (long)&local_70 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0xff;
  local_68 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,local_70,lVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar6 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  lVar7 = lVar5 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar7 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(lVar8,unaff_x20 + *(int *)(param_2 + 0x24),lVar3);
  (**(code **)(lVar6 + 0x10))
            (lVar7,unaff_x20 + *(int *)(param_2 + 0x28),CONCAT71(extraout_var,OVar2.value));
  (**(code **)(lVar4 + 0x10))(lVar5);
  FUN_10073cf30(local_68,lVar8,lVar7,lVar5,lVar1,local_70);
  return;
}



/* Address: 0x10073d8f0 | FUN_10073d8f0 */

void FUN_10073d8f0(long param_1)

{
  FUN_10073d7bc();
                    /* WARNING: Could not recover jumptable at 0x00010073d91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x10073d920 | FUN_10073d920 */

void FUN_10073d920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar4 = *(long *)(param_5 + -8);
  puVar5 = auStack_80 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0xff;
  local_78 = param_3;
  local_70 = param_4;
  local_68 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar6 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  lVar7 = (long)puVar5 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = lVar7 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(lVar3,param_2,lVar2);
  (**(code **)(lVar6 + 0x10))(lVar7,local_78,CONCAT71(extraout_var,OVar1.value));
  (**(code **)(lVar4 + 0x10))(puVar5,local_70,param_5);
  FUN_10073d6dc(local_68,lVar3,lVar7,puVar5,param_5,param_6);
  return;
}



/* Address: 0x10073da54 | FUN_10073da54 */

void FUN_10073da54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_100fe1470;
  FUN_1000f7830(&DAT_100fe1470,&DAT_100c75b08);
  iVar2 = *(int *)(puVar3 + 0x24);
  *(undefined8 *)(param_1 + iVar2) = param_2;
  ((undefined8 *)(param_1 + iVar2))[1] = param_3;
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar3 + 0x28));
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined1 *)(puVar1 + 2) = param_6;
  Swift::SuspendingClock::init();
  return;
}



/* Address: 0x10073dacc | FUN_10073dacc */

void FUN_10073dacc(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75b20,param_1);
  return;
}



/* Address: 0x10073dadc | FUN_10073dadc */

undefined1  [16] FUN_10073dadc(long param_1)

{
  Optional OVar1;
  ulong uVar2;
  undefined7 extraout_var;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  long local_38;
  long local_30;
  long local_28;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar2 = 0x13f;
  _swift_checkMetadataState();
  if (uVar3 < 0x40) {
    local_38 = *(long *)(uVar2 - 8) + 0x40;
    uVar4 = *(ulong *)(param_1 + 0x18);
    uVar3 = 0x13f;
    _swift_getAssociatedTypeWitness();
    uVar2 = uVar3;
    if (uVar4 < 0x40) {
      local_30 = *(long *)(uVar3 - 8) + 0x40;
      OVar1 = Swift::Optional::typeMetadataAccessor();
      uVar2 = CONCAT71(extraout_var,OVar1.value);
      if (uVar3 < 0x40) {
        local_28 = *(long *)(uVar2 - 8) + 0x40;
        _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x20);
        uVar2 = 0;
        uVar5 = 0;
        goto LAB_10073db94;
      }
    }
  }
  uVar5 = 0x3f;
LAB_10073db94:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Address: 0x10073dba8 | FUN_10073dba8 */

long * FUN_10073dba8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar12 = *(long *)(lVar2 + -8);
  lVar10 = *(long *)(lVar12 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar11 = *(long *)(lVar4 + -8);
  uVar6 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  uVar8 = lVar10 + uVar6;
  sVar7 = *(size_t *)(lVar11 + 0x40);
  lVar10 = sVar7 + uVar6;
  if (*(int *)(lVar11 + 0x54) == 0) {
    sVar7 = sVar7 + 1;
  }
  uVar3 = *(uint *)(lVar12 + 0x50) | *(uint *)(lVar11 + 0x50);
  uVar1 = uVar3 & 0xff;
  if ((uVar1 < 8 && (uVar3 & 0x100000) == 0) &&
      (lVar10 + (uVar8 & (uVar6 ^ 0xffffffffffffffff)) & (uVar6 ^ 0xffffffffffffffff)) + sVar7 <
      0x19) {
    uVar6 = ~uVar6;
    (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar2);
    uVar9 = uVar8 + (long)param_1 & uVar6;
    uVar8 = uVar8 + (long)param_2 & uVar6;
    pcVar13 = *(code **)(lVar11 + 0x10);
    (*pcVar13)(uVar9,uVar8,lVar4);
    uVar9 = lVar10 + uVar9;
    uVar8 = lVar10 + uVar8;
    uVar5 = uVar8 & uVar6;
    (**(code **)(lVar11 + 0x30))(uVar5,1,lVar4);
    if ((int)uVar5 == 0) {
      (*pcVar13)(uVar9 & uVar6,uVar8 & uVar6,lVar4);
      (**(code **)(lVar11 + 0x38))(uVar9 & uVar6,0,1,lVar4);
    }
    else {
      _memcpy((void *)(uVar9 & uVar6),(void *)(uVar8 & uVar6),sVar7);
    }
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    param_1 = (long *)(lVar10 + ((ulong)uVar1 + 0x10 & ((ulong)uVar1 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}


